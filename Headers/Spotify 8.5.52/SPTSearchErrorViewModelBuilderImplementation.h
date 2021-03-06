//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSearchErrorViewModelBuilder-Protocol.h"

@class NSString;
@protocol SPTSearch2EmptyStatePropertiesProvider, SPTSearchUBILocationSerializer;

@interface SPTSearchErrorViewModelBuilderImplementation : NSObject <SPTSearchErrorViewModelBuilder>
{
    _Bool _drilldown;
    id <SPTSearchUBILocationSerializer> _ubiLocationSerializer;
    id <SPTSearch2EmptyStatePropertiesProvider> _emptyStatePropertiesProvider;
}

@property(readonly, nonatomic) _Bool drilldown; // @synthesize drilldown=_drilldown;
@property(readonly, nonatomic) id <SPTSearch2EmptyStatePropertiesProvider> emptyStatePropertiesProvider; // @synthesize emptyStatePropertiesProvider=_emptyStatePropertiesProvider;
@property(readonly, nonatomic) id <SPTSearchUBILocationSerializer> ubiLocationSerializer; // @synthesize ubiLocationSerializer=_ubiLocationSerializer;
- (void).cxx_destruct;
- (id)errorLoggingData;
- (id)offlineStateOverlayComponent;
- (id)errorStateOverlayComponent;
- (id)overlayComponentForErrorType:(unsigned long long)arg1;
- (id)viewModelForErrorType:(unsigned long long)arg1;
- (id)initWithUBILocationSerializer:(id)arg1 emptyStatePropertiesProvider:(id)arg2 drilldown:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

