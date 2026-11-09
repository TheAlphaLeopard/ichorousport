// gml_Script_anon_713_gml_Object_oShopRaven_Create_0 @ 0x140d72f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_713_gml_Object_oShopRaven_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong in_stack_ffffffffffffff10;
  undefined1 **ppuVar8;
  ulonglong uVar9;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@109@gml_Object_oShopRaven_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 7;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_a8,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_dc = 0;
  local_e8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 8;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  FUN_140e87440(uVar4,DAT_1419f5848,0x80000000,&local_58,(ulonglong)pcVar5 & 0xffffffffffffff00,
                in_stack_ffffffffffffff10 & 0xffffffffffffff00);
  local_c8 = CONCAT44(uRam0000000141ddb6dc,_DAT_141ddb6d8);
  uStack_c0 = uRam0000000141ddb6e0;
  uStack_bc = DAT_141ddb6e4;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_c8);
  local_88 = local_a8;
  uVar4 = FUN_140069500(uVar4);
  ppuVar8 = &local_88;
  puVar6 = &local_58;
  uVar4 = FUN_140e63610(uVar4,param_2,&local_e8,1,puVar6,ppuVar8);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') goto LAB_140d73305;
  local_38 = 10;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  FUN_140e87440(uVar4,DAT_141a55540,0x80000000,&local_68,(ulonglong)puVar6 & 0xffffffffffffff00,
                (ulonglong)ppuVar8 & 0xffffffffffffff00);
  local_c8 = CONCAT44(uRam0000000141ddb67c,_DAT_141ddb678);
  uStack_c0 = uRam0000000141ddb680;
  uStack_bc = DAT_141ddb684;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_c8);
  local_80 = local_98;
  uVar4 = FUN_140069500(uVar4);
  ppuVar8 = &local_80;
  puVar6 = &local_68;
  FUN_140e63610(uVar4,param_2,&local_b8,1,puVar6,ppuVar8);
  local_38 = 0xb;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uStack_bc = 0xf;
  local_c8 = 0x1000000000000ee;
  uVar9 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
  uVar7 = (ulonglong)puVar6 & 0xffffffffffffff00;
  FUN_140e87440(&local_c8,DAT_1419f5868,0x80000000,&local_d8,uVar7,uVar9);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140e87440(&local_d8,DAT_141a55540,0x80000000,&local_78,uVar7 & 0xffffffffffffff00,
                uVar9 & 0xffffffffffffff00);
  local_c8 = CONCAT44(uRam0000000141ddb6bc,_DAT_141ddb6b8);
  uStack_c0 = uRam0000000141ddb6c0;
  uStack_bc = DAT_141ddb6c4;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_c8);
  local_88 = local_a8;
  uVar4 = 0;
  switch(local_cc) {
  case 0:
  case 7:
  case 10:
  case 0xd:
switchD_140d732ab_caseD_0:
    uVar3 = FUN_140e4a8b0(&local_d8);
    uVar4 = FUN_140e87250(uVar3);
    break;
  case 6:
    uVar4 = local_d8;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_d8 >> 0x20);
    if ((iVar2 == 0x1000000) || (iVar2 == 0x4000001)) goto switchD_140d732ab_caseD_0;
  }
  FUN_140e63610(uVar4,param_2,&local_e8,1,&local_78,&local_88);
LAB_140d73305:
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

