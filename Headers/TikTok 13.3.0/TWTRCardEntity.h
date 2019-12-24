//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface TWTRCardEntity : NSObject <NSCoding, NSCopying>
{
    NSString *_URL;
}

+ (id)cardEntityClasses;
+ (void)unregisterClass:(Class)arg1;
+ (void)registerClass:(Class)arg1;
+ (_Bool)canInitWithJSONDictionary:(id)arg1;
+ (id)cardEntityFromJSONDictionary:(id)arg1;
+ (void)initialize;
@property(readonly, copy, nonatomic) NSString *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;

@end
