//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MessageParam : NSObject
{
    unsigned int _unMsgID;
    int _nArg1;
    int _nArg2;
    NSString *_cArg3;
}

@property(copy, nonatomic) NSString *cArg3; // @synthesize cArg3=_cArg3;
@property(readonly, nonatomic) int nArg2; // @synthesize nArg2=_nArg2;
@property(readonly, nonatomic) int nArg1; // @synthesize nArg1=_nArg1;
@property(readonly, nonatomic) unsigned int unMsgID; // @synthesize unMsgID=_unMsgID;
- (void).cxx_destruct;
- (id)initWithID:(unsigned int)arg1 arg1:(int)arg2 arg2:(int)arg3 string:(id)arg4;

@end
