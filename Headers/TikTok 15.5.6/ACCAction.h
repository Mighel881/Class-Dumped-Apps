//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ACCAction : NSObject
{
    int _type;
    int _status;
}

+ (id)rejected;
+ (id)fulfilled;
+ (id)action;
@property(readonly, nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)reject;
- (id)fulfill;

@end
