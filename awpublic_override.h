* {en} Client override of awPublic.h
* {en} Never replaced when FoxInCloud is updated
* {en} sample use case below: redefine messabeBox class used by awPublic.prg!wMessageBox()
* {en} recompile source files after any change

* {fr} Surcharges client de awPublic.h
* {fr} Jamais remplac�es par mises � jour FoxInCloud
* {fr} Exemple d'utilisation ci-apr�s : red�finir la classe de messageBox utilis�e par awPublic.prg!wMessageBox()
* {fr} Toujours recompiler les fichiers source apr�s une modification

&& #UNDEF	wMESSAGEBOX_CLASS
&& #DEFINE	wMESSAGEBOX_CLASS	xxxFrmMB

#UNDEF	V_2_21
&& {en} compile the project after any change: 
&& {fr} compiler le projet apr�s tout changement :
*  do atPJcompile with 'V_2_21'
