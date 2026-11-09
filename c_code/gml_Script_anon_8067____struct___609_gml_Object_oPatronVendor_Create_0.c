// gml_Script_anon_8067____struct___609_gml_Object_oPatronVendor_Create_0 @ 0x140bd3d10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_8067____struct___609_gml_Object_oPatronVendor_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 *local_res8;
  code *pcVar6;
  ulonglong uVar7;
  ulonglong in_stack_ffffffffffffff10;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_54;
  undefined1 local_50 [12];
  byte local_44;
  
  local_70 = "gml_Script_anon@7414@___struct___609@gml_Object_oPatronVendor_Create_0";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x19f;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_50,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c60);
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57ca0);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_54 = 0xffffff;
  local_60 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x1a0;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uStack_e0 = CONCAT44(0xd,(undefined4)uStack_e0);
  local_e8 = 0;
  local_88 = 0;
  uStack_80 = uStack_e0;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_88);
  FUN_140e87930(uVar5,DAT_1419f5b38,0x80000000,&local_98);
  local_68 = 0x1a1;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_a8 = 0;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar5,DAT_1419f2078,0x80000000,&local_a8);
  local_68 = 0x1a2;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 0;
  local_b8 = 0;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar5,DAT_141a0a848,0x80000000,&local_b8);
  local_68 = 0x1a4;
  uStack_e0 = CONCAT44(0xd,(undefined4)uStack_e0);
  local_e8 = 0;
  if (&local_e8 != puVar3) {
    local_88 = 0;
    uStack_80 = CONCAT44(0xd,(undefined4)uStack_e0);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_88);
  }
  local_68 = 0x1a5;
  uStack_e0 = CONCAT44(0xd,(undefined4)uStack_e0);
  local_e8 = 0;
  if (&local_e8 != puVar4) {
    local_88 = 0;
    uStack_80 = CONCAT44(0xd,(undefined4)uStack_e0);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_88);
  }
  local_68 = 0x1a7;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  uStack_e0._4_4_ = 0xf;
  local_e8 = 0x1000000000000ee;
  in_stack_ffffffffffffff10 = in_stack_ffffffffffffff10 & 0xffffffffffffff00;
  uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
  FUN_140e87440(&local_e8,DAT_1419f5868,0x80000000,&local_d8,uVar7,in_stack_ffffffffffffff10);
  if ((1 << ((byte)uStack_e0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140e87440(&local_d8,DAT_141a55540,0x80000000,&local_60,uVar7 & 0xffffffffffffff00,
                in_stack_ffffffffffffff10 & 0xffffffffffffff00);
  local_88 = CONCAT44(uRam0000000141dda3ec,_DAT_141dda3e8);
  uStack_80 = CONCAT44(DAT_141dda3f4,uRam0000000141dda3f0);
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_88);
  local_res8 = local_50;
  uVar5 = 0;
  switch(local_cc) {
  case 6:
    uVar5 = local_d8;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_d8 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) break;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_d8);
    uVar5 = FUN_140e87250(uVar2);
  }
  FUN_140e63610(uVar5,param_2,&local_c8,1,&local_60,&local_res8);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_50,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

