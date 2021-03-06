//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTSettingsUIAdapter.h"

@class ASTMenuDropdownStreamItem, NSMutableArray, NSString;

@interface ASTNewsSettingsUIAdapter : ASTSettingsUIAdapter
{
    NSMutableArray *_enabledProviderIDs;
    ASTMenuDropdownStreamItem *_languagePickerStreamItem;
    NSString *_selectedLanguageID;
}

@property(retain, nonatomic) NSString *selectedLanguageID; // @synthesize selectedLanguageID=_selectedLanguageID;
@property(readonly, nonatomic) ASTMenuDropdownStreamItem *languagePickerStreamItem; // @synthesize languagePickerStreamItem=_languagePickerStreamItem;
- (void).cxx_destruct;
- (void)updateProviderSettingsWithLocaleID:(id)arg1 modifiedProviderID:(id)arg2 isProviderAdded:(_Bool)arg3;
- (void)didSelectLocaleID:(id)arg1;
- (void)updateEnabled:(_Bool)arg1 forProviderID:(int)arg2;
- (_Bool)isEnabledProvider:(int)arg1;
- (void)setEnabledProviderIDsFromSettings:(id)arg1;
- (void)menuStreamController:(id)arg1 didSelectItem:(id)arg2;
- (void)menuStreamController:(id)arg1 didUpdateItem:(id)arg2;
- (id)menuSectionsForSettings:(id)arg1;
- (id)settingsFilter;
- (id)pageCustomizations;
- (id)initWithSettingsService:(id)arg1;

@end

