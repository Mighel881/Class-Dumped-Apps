//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFSTwitterEntityURLProvider-Protocol.h>

@class NSDictionary, TFNTwitterCardData, TFSTwitterPromotedContent;
@protocol TFNTwitterCardDataSourceObject;

@protocol TFNTwitterCardDataSource <TFSTwitterEntityURLProvider>
@property(nonatomic, readonly) NSDictionary *scribeItem;
@property(nonatomic, readonly) TFSTwitterPromotedContent *promotedContent;
@property(nonatomic, readonly) id <TFNTwitterCardDataSourceObject> sourceObject;
@property(nonatomic, readonly) NSDictionary *cardEvent;
@property(nonatomic, readonly) TFNTwitterCardData *cardData;
@end

