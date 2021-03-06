//
//  Alien.h
//  EasyMappingExample
//
//  Created by Lucas Medeiros Leite on 12/7/13.
//  Copyright (c) 2013 EasyKit. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseTestModel.h"

@interface Alien : BaseTestModel

@property (nonatomic, copy) NSString *name;
@property (nonatomic, strong) NSMutableArray *fingers;

@end
