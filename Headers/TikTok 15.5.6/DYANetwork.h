//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DYANetwork : NSObject
{
}

+ (id)transforToModel:(Class)arg1 rawData:(id)arg2 error:(id *)arg3;
+ (void)requestJSONWithMethod:(unsigned long long)arg1 URLString:(id)arg2 parameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)POST:(id)arg1 parameters:(id)arg2 model:(Class)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)GET:(id)arg1 parameters:(id)arg2 model:(Class)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)POSTJSONDictionary:(id)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)GETJSONDictionary:(id)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

