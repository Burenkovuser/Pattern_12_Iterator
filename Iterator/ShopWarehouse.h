//
//  ShopWarehouse.h
//  Iterator
//
//  Created by Vasilii on 16.06.17.
//  Copyright © 2017 Vasilii Burenkov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ItemInShop.h"
#import "GoodItemsIterator.h"
#import "BadItemsEnumerator.h"


@interface ShopWarehouse : NSObject {
@private NSMutableArray *goods;
@private GoodItemsIterator *goodItemsEnumerator;
@private BadItemsEnumerator *badItemsEnumerator;
}

-(void) addItem:(ItemInShop *)anItem;
-(NSEnumerator *) getBrokenItemsEnumerator;
-(NSEnumerator *) getGoodItemsEnumerator;

@end
