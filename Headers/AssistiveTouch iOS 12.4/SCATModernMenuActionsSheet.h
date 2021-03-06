//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCATModernMenuSheet.h"

#import "SCATModernMenuScrollSheetFallbackScrollAncestorDelegate-Protocol.h"

@class AXUIElement, NSString;

@interface SCATModernMenuActionsSheet : SCATModernMenuSheet <SCATModernMenuScrollSheetFallbackScrollAncestorDelegate>
{
    unsigned long long _storedNumberOfItemsInFirstPage;
    AXUIElement *_fallbackScrollDownAncestor;
    AXUIElement *_fallbackScrollUpAncestor;
    AXUIElement *_fallbackScrollLeftAncestor;
    AXUIElement *_fallbackScrollRightAncestor;
}

@property(retain, nonatomic) AXUIElement *fallbackScrollRightAncestor; // @synthesize fallbackScrollRightAncestor=_fallbackScrollRightAncestor;
@property(retain, nonatomic) AXUIElement *fallbackScrollLeftAncestor; // @synthesize fallbackScrollLeftAncestor=_fallbackScrollLeftAncestor;
@property(retain, nonatomic) AXUIElement *fallbackScrollUpAncestor; // @synthesize fallbackScrollUpAncestor=_fallbackScrollUpAncestor;
@property(retain, nonatomic) AXUIElement *fallbackScrollDownAncestor; // @synthesize fallbackScrollDownAncestor=_fallbackScrollDownAncestor;
@property(nonatomic) unsigned long long storedNumberOfItemsInFirstPage; // @synthesize storedNumberOfItemsInFirstPage=_storedNumberOfItemsInFirstPage;
- (void).cxx_destruct;
- (void)menuItemWasActivated:(id)arg1;
- (void)toggleScanningMode;
- (void)_performScrollAction:(int)arg1;
- (void)_handlePerformEscape;
- (void)_performFallbackScrollAncestorAction:(int)arg1;
- (id)fallbackAncestorForAutoscrollInScrollSheet:(id)arg1;
- (id)fallbackAncestorForScrollToTopInScrollSheet:(id)arg1;
- (_Bool)scrollSheet:(id)arg1 shouldIncludeFallbackScrollAncestorActionsInVerticalDirection:(_Bool)arg2;
- (void)scrollSheet:(id)arg1 performFallbackScrollAncestorAction:(int)arg2;
- (_Bool)shouldUpdateMenuItem:(id)arg1;
- (void)_title:(id *)arg1 imageForNavigationItem:(id *)arg2;
- (long long)preferredTipObject;
- (id)makeMenuItemsIfNeeded;
- (void)_addATVRemoteMenuButtonToMenuItems:(id)arg1;
- (void)_addLockItemMenuToMenuItems:(id)arg1;
- (void)_addItemMenuToMenuItems:(id)arg1;
- (void)_addRecipesToMenuItems:(id)arg1;
- (void)_addSiriShortcutsToMenuItems:(id)arg1;
- (void)_addMediaControlsToMenuItems:(id)arg1;
- (void)_addSettingsToMenuItems:(id)arg1;
- (void)_addDeviceToMenuItems:(id)arg1;
- (void)_addNavigationModeToggleToMenuItems:(id)arg1;
- (void)_addRefineSelectionIfApplicableToMenuItems:(id)arg1;
- (void)_addToggleDictationIfApplicableForElement:(id)arg1 toMenuItems:(id)arg2;
- (void)_addEscapeIfApplicableForElement:(id)arg1 toMenuItems:(id)arg2;
- (void)_addEditIfApplicableForElement:(id)arg1 toMenuItems:(id)arg2;
- (void)_addGesturesToMenuItems:(id)arg1;
- (void)_addSideAppToMenuItems:(id)arg1;
- (void)_addControlCenterActionsToMenuItems:(id)arg1;
- (void)_addLockScreenActionsToMenuItems:(id)arg1;
- (void)_addHomeActionToMenuItems:(id)arg1;
- (void)_addAppWideScrollIfApplicableToMenuItems:(id)arg1;
- (void)_addScrollIfApplicableForElement:(id)arg1 toMenuItems:(id)arg2;
- (void)_addScrollShortcutIfApplicableForElement:(id)arg1 toMenuItems:(id)arg2;
- (void)_addElementSpecificActionsIfApplicableForElement:(id)arg1 toMenuItems:(id)arg2;
- (void)_addTapIfApplicableForElement:(id)arg1 toMenuItems:(id)arg2;
- (void)_addIncrementDecrementIfApplicableForElement:(id)arg1 toMenuItems:(id)arg2;
- (id)_typingCandidates;
- (_Bool)_anyEscapableElementExists;
- (id)_escapableElements;
- (id)_bestScrollMenuItemsForScrollableElement:(id)arg1;
- (id)_menuItemForScrollAction:(int)arg1;
- (unsigned long long)numberOfItemsInFirstPage;
- (id)initWithMenu:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

