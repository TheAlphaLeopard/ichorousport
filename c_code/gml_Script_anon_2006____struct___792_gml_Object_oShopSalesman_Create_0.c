// gml_Script_anon_2006____struct___792_gml_Object_oShopSalesman_Create_0 @ 0x140d7b7a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_2006____struct___792_gml_Object_oShopSalesman_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong in_stack_ffffffffffffff30;
  undefined1 **ppuVar5;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined1 local_90 [12];
  byte local_84;
  undefined1 local_80 [12];
  byte local_74;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 local_60;
  char *local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  
  local_58 = "gml_Script_anon@1678@gml_Object_oShopSalesman_Create_0";
  local_60 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_60;
  local_50 = 0x44;
  pcVar3 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_90,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_2c = 0xffffff;
  local_38 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_50 = 0x45;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  FUN_140e87440(uVar2,DAT_1419f5848,0x80000000,&local_38,(ulonglong)pcVar3 & 0xffffffffffffff00,
                in_stack_ffffffffffffff30 & 0xffffffffffffff00);
  local_b8 = (undefined8 *)CONCAT44(uRam0000000141ddb7ac,_DAT_141ddb7a8);
  uStack_b0 = (char *)CONCAT44(DAT_141ddb7b4,uRam0000000141ddb7b0);
  if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_80);
  }
  FUN_140041b80(local_80,&local_b8);
  local_68 = local_80;
  uVar2 = FUN_140069500(uVar2);
  ppuVar5 = &local_68;
  uVar2 = FUN_140e63610(uVar2,param_2,&local_c8,1,&local_38,ppuVar5);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 == '\0') goto LAB_140d7bba1;
  local_50 = 0x46;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
LAB_140d7b945:
    local_b8 = (undefined8 *)*param_5;
    uStack_b0 = (char *)param_5[1];
    if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    FUN_140041b80(&local_a0,&local_b8);
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 != &local_a0) goto LAB_140d7b945;
  }
  FUN_140e87930(uVar2,DAT_1419ff778,0x80000000,&local_a0);
  local_50 = 0x47;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_b8 = (undefined8 *)CONCAT44(uRam0000000141ddb73c,_DAT_141ddb738);
  uStack_b0 = (char *)CONCAT44(DAT_141ddb744,uRam0000000141ddb740);
  if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_90);
  }
  FUN_140041b80(local_90,&local_b8);
  local_70 = local_90;
  local_b8 = (undefined8 *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_b0 = (char *)CONCAT44(uRam00000001419df7cc,uRam00000001419df7c8);
  if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_80);
  }
  FUN_140041b80(local_80,&local_b8);
  local_68 = local_80;
  uStack_b0 = "gml_Script_savedata_set";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 8;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c20);
  local_bc = 5;
  local_c8 = 0;
  local_a8 = 10;
  FUN_140e98ef0(param_1,param_2,uVar2,local_70,local_68);
  DAT_141dc7a50 = local_b8;
  local_50 = 0x48;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  uVar4 = 0;
  gml_Script_settings_save(param_1,param_2,&local_c8,0,0);
  local_50 = 0x49;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  FUN_140e87440(uVar2,DAT_141a55540,0x80000000,&local_48,uVar4 & 0xffffffffffffff00,
                (ulonglong)ppuVar5 & 0xffffffffffffff00);
  local_b8 = (undefined8 *)CONCAT44(uRam0000000141ddb77c,_DAT_141ddb778);
  uStack_b0 = (char *)CONCAT44(DAT_141ddb784,uRam0000000141ddb780);
  if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_90);
  }
  FUN_140041b80(local_90,&local_b8);
  local_70 = local_90;
  uVar2 = FUN_140069500(uVar2);
  FUN_140e63610(uVar2,param_2,&local_c8,1,&local_48,&local_70);
LAB_140d7bba1:
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  _eh_vector_destructor_iterator_(local_90,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_60;
  return param_3;
}

