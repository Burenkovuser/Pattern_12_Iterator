//
//  BasicEnumerator.h
//  Iterator
//
//  Created by Vasilii on 16.06.17.
//  Copyright © 2017 Vasilii Burenkov. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BasicEnumerator : NSObject

-(id)initWithItems:(NSMutableArray *)anItems;
-(NSArray *)allObjects;
-(id) nextObject;

@end
