function remigrate()
%REMIGRATE restore original model from migration backup and then migrate again

%restore old model
backupfolder = '.\Migrated\version_800_111003' ;
backupmodel  = 'Demo_LaneKeeping_800_111003_cs' ;
backupfile   = '.\Migrated\version_800_111003\Demo_LaneKeeping_800_111003_cs.mdl' ;
srcfolder    = '.' ;
srcmodel     = 'Demo_LaneKeeping_cs' ;
modelreferencing = 0 ;
mbxutils.backupModel(backupfolder,backupmodel,srcfolder,srcmodel); 
chdir('.');
open_system('Demo_LaneKeeping_cs');

%migrate restored model
migrate_all(srcmodel,modelreferencing,backupfile);
end
