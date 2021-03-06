//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPremiumDestinationUIHubComponentFactory-Protocol.h"

@class HUBComponentRegistry, NSString;
@protocol GLUETheme;

@interface SPTPremiumDestinationUIHubComponentFactoryImplementation : NSObject <SPTPremiumDestinationUIHubComponentFactory>
{
    HUBComponentRegistry *_componentRegistry;
    id <GLUETheme> _theme;
}

@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) HUBComponentRegistry *componentRegistry; // @synthesize componentRegistry=_componentRegistry;
- (void).cxx_destruct;
- (id)providePremiumDestinationUIComponents;
- (void)registerPremiumDestinationUIHubsComponents;
- (id)provideHubsComponentRegistry;
- (id)initWithComponentRegistry:(id)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

