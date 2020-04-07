//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESFalconMetaData-Protocol.h"

@class IESFalconStatModel, NSData, NSDictionary, NSString;

@interface IESFalconFileMetaData : NSObject <IESFalconMetaData>
{
    NSData *_falconData;
    IESFalconStatModel *_statModel;
}

@property(retain, nonatomic) IESFalconStatModel *statModel; // @synthesize statModel=_statModel;
@property(retain, nonatomic) NSData *falconData; // @synthesize falconData=_falconData;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, nonatomic) NSDictionary *allHeaderFields;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long statusCode;
@property(readonly) Class superclass;

@end
