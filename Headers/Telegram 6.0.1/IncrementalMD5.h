//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IncrementalMD5 : NSObject
{
    struct CC_MD5state_st _ctx;
}

- (id)complete;
- (void)update:(const void *)arg1 count:(int)arg2;
- (void)update:(id)arg1;
- (id)init;

@end
