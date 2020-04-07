//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFNTwitterComposePlaceStore;
@protocol TFNTwitterPOISuggesterDelegate;

@interface TFNTwitterPOISuggester : NSObject
{
    id <TFNTwitterPOISuggesterDelegate> _delegate;
    TFNTwitterComposePlaceStore *_placeStore;
}

@property(retain, nonatomic) TFNTwitterComposePlaceStore *placeStore; // @synthesize placeStore=_placeStore;
@property(nonatomic) __weak id <TFNTwitterPOISuggesterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_fetchDidFail:(id)arg1;
- (void)_fetchDidSucceed:(id)arg1;
- (void)suggestPlaces;
- (id)initWithPlaceStore:(id)arg1;

@end
