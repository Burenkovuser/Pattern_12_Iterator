//
//  GoodItemsIterator.m
//  Iterator
//
//  Created by Vasilii on 16.06.17.
//  Copyright © 2017 Vasilii Burenkov. All rights reserved.
//

#import "GoodItemsIterator.h"
#import "ShopWarehouse.h"

@implementation GoodItemsIterator

-(id) initWithItems:(NSMutableArray *)anItems {
    self = [super init];
    itemsArray = [[NSMutableArray alloc] init];
    for (ItemInShop *item in anItems)
    {
        if (!item.isBroken)
            [itemsArray addObject:item];
    }
    internalEnumerator = [itemsArray objectEnumerator];
    return self;
}
-(NSArray *)allObjects
{
    return itemsArray;
}
-(id) nextObject
{
    return [internalEnumerator nextObject];
}

@end
