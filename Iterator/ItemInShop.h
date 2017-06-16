//
//  ItemInShop.h
//  Iterator
//
//  Created by Vasilii on 16.06.17.
//  Copyright © 2017 Vasilii Burenkov. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ItemInShop : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic) BOOL isBroken;

-(id) initWithArgs:(NSString *)aName andQaulity:(BOOL)isBroken;

@end
