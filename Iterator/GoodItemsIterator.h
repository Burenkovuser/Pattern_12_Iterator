//
//  GoodItemsIterator.h
//  Iterator
//
//  Created by Vasilii on 16.06.17.
//  Copyright © 2017 Vasilii Burenkov. All rights reserved.
//

#import "BasicEnumerator.h"

@interface GoodItemsIterator : BasicEnumerator
{
@private NSMutableArray *itemsArray;
@private NSEnumerator *internalEnumerator;
}

@end
