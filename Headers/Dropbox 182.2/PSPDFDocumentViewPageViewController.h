//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PSPDFKitUI/PSPDFOverridable-Protocol.h>

@class NSString, PSPDFDocumentViewLayout, PSPDFReusableObjectCache, PSPDFSpreadView;

@interface PSPDFDocumentViewPageViewController : UIViewController <PSPDFOverridable>
{
    PSPDFSpreadView *_spreadView;
    long long _pageIndex;
    PSPDFDocumentViewLayout *_layout;
    PSPDFReusableObjectCache *_pageViewCache;
}

@property(readonly, nonatomic) PSPDFReusableObjectCache *pageViewCache; // @synthesize pageViewCache=_pageViewCache;
@property(readonly, nonatomic) PSPDFDocumentViewLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
- (void).cxx_destruct;
- (Class)classForClass:(Class)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)updateSpreadView;
@property(readonly, nonatomic) PSPDFSpreadView *spreadView; // @synthesize spreadView=_spreadView;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithLayout:(id)arg1 pageViewCache:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

