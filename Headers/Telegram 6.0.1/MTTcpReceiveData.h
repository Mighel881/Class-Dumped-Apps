//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MTTcpReceiveData : NSObject
{
    int _tag;
    int _length;
}

@property(readonly, nonatomic) int length; // @synthesize length=_length;
@property(readonly, nonatomic) int tag; // @synthesize tag=_tag;
- (id)initWithTag:(int)arg1 length:(int)arg2;

@end

