//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SPTPartnerIntegrationAuthorizer, SPTPartnerIntegrationStateLoader, SPTPartnerTestManagerImplementation;
@protocol SPTPartnerIntegrationRegistry, SPTPartnerIntegrationSettingsViewModelDelegate;

@interface SPTPartnerIntegrationSettingsViewModel : NSObject
{
    id <SPTPartnerIntegrationSettingsViewModelDelegate> _delegate;
    NSArray *_sections;
    SPTPartnerIntegrationStateLoader *_stateLoader;
    SPTPartnerIntegrationAuthorizer *_authorizer;
    SPTPartnerTestManagerImplementation *_testManager;
    id <SPTPartnerIntegrationRegistry> _integrationRegistry;
}

@property(readonly, nonatomic) id <SPTPartnerIntegrationRegistry> integrationRegistry; // @synthesize integrationRegistry=_integrationRegistry;
@property(readonly, nonatomic) SPTPartnerTestManagerImplementation *testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) SPTPartnerIntegrationAuthorizer *authorizer; // @synthesize authorizer=_authorizer;
@property(readonly, nonatomic) SPTPartnerIntegrationStateLoader *stateLoader; // @synthesize stateLoader=_stateLoader;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) __weak id <SPTPartnerIntegrationSettingsViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isOffline;
- (id)sectionsFromCategories:(id)arg1;
- (void)loadData;
- (id)initWithIntegrationStateLoader:(id)arg1 authorizer:(id)arg2 testManager:(id)arg3;

@end

