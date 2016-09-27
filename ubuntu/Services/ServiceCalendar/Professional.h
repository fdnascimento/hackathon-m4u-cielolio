//
//  Professional.h
//
//  Created by Denis Nascimento on 9/25/16
//  Copyright (c) 2016 Ths Solution. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface Professional : NSObject <NSCoding, NSCopying>

@property (nonatomic, strong) NSString *professionalIdentifier;
@property (nonatomic, strong) NSString *url;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *photo;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
