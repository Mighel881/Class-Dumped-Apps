//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTConcertsEntitySectionViewModel-Protocol.h"

@class NSArray, NSNumberFormatter, NSString, SPTConcertsLogger;
@protocol SPTLinkDispatcher;

@interface SPTConcertsEntitySectionPerformingArtistsViewModel : NSObject <SPTConcertsEntitySectionViewModel>
{
    NSString *_titleText;
    NSArray *_performingArtistsViewModels;
    NSNumberFormatter *_monthlyListenersFormatter;
    SPTConcertsLogger *_logger;
    id <SPTLinkDispatcher> _linkDispatcher;
}

@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) SPTConcertsLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) NSNumberFormatter *monthlyListenersFormatter; // @synthesize monthlyListenersFormatter=_monthlyListenersFormatter;
@property(readonly, copy, nonatomic) NSArray *performingArtistsViewModels; // @synthesize performingArtistsViewModels=_performingArtistsViewModels;
@property(readonly, copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (id)viewModelForRow:(long long)arg1;
@property(readonly, nonatomic) _Bool nestedRows;
@property(readonly, nonatomic) long long rows;
- (id)performingArtistsViewModelsFromArtists:(id)arg1;
- (id)initWithPerformingArtists:(id)arg1 monthlyListenersFormatter:(id)arg2 linkDispatcher:(id)arg3 concertsLogger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
