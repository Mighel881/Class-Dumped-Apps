//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSXIntent.h"

@class CDRBrowseResponse, NSString, UINavigationController;

@interface GSXReplaceCurrentViewControllerWithLegacyBrowseViewControllerIntent : GSXIntent
{
    // Error parsing type: , name: pageERI
    // Error parsing type: , name: query
    // Error parsing type: , name: merchantID
    // Error parsing type: , name: navigationController
    // Error parsing type: , name: browseResponse
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithBrowseResponse:(id)arg1 query:(id)arg2 navigationController:(id)arg3 merchantID:(id)arg4;
- (id)initWithBrowseResponse:(id)arg1 pageERI:(id)arg2 navigationController:(id)arg3;
@property(nonatomic, readonly) CDRBrowseResponse *browseResponse; // @synthesize browseResponse;
@property(nonatomic, readonly) UINavigationController *navigationController; // @synthesize navigationController;
@property(nonatomic, readonly) NSString *merchantID;
@property(nonatomic, readonly) NSString *query;
@property(nonatomic, readonly) NSString *pageERI;

@end

