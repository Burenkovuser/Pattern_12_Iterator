//
//  ItemInShop.m
//  Iterator
//
//  Created by Vasilii on 16.06.17.
//  Copyright © 2017 Vasilii Burenkov. All rights reserved.
//

#import "ItemInShop.h"

@implementation ItemInShop

- (id)initWithArgs:(NSString *)aName andQaulity:(BOOL)isBroken
{
    self = [super init];
    self.name = aName;
    self.isBroken = isBroken;
    return self;
}

@end
