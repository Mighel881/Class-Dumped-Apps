//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSObject;

@interface LSWeakProxy : NSObject
{
    id <NSObject> _weakObject;
}

+ (id)LS_GET_WEAK_ASSOCIATE:(id)arg1 withKey:(const void *)arg2;
@property(nonatomic) __weak id <NSObject> weakObject; // @synthesize weakObject=_weakObject;
- (void).cxx_destruct;

@end
