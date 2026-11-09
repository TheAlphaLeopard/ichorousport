// gml_Script____struct___790_gml_Object_oShopRaven_Create_0 @ 0x140d76300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___790_gml_Object_oShopRaven_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 **ppuVar8;
  undefined1 **ppuVar9;
  ulonglong uVar10;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_80 = "gml_Script_anon@2245@___struct___790@gml_Object_oShopRaven_Create_0";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x87;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(&local_a8,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_44 = 0xffffff;
  local_50 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_54 = 0xffffff;
  local_60 = 0;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c60);
  local_cc = 0;
  local_d8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x89;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f7008);
  if (puVar5 != &local_a8) {
    local_e8 = *puVar5;
    uStack_e0 = *(undefined4 *)(puVar5 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_e8);
  }
  local_70 = &local_a8;
  ppuVar8 = &local_70;
  uVar7 = CONCAT44(uVar3,DAT_141a02ef8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_d8,1,uVar7,ppuVar8);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 != '\0') goto LAB_140d766d1;
  local_78 = 0x8b;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  FUN_140e87440(uVar6,DAT_141a55540,0x80000000,&local_50,uVar7 & 0xffffffffffffff00,
                (ulonglong)ppuVar8 & 0xffffffffffffff00);
  local_e8 = CONCAT44(uRam0000000141ddb6dc,_DAT_141ddb6d8);
  uStack_e0 = uRam0000000141ddb6e0;
  uStack_dc = DAT_141ddb6e4;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_e8);
  local_68 = local_98;
  uVar6 = FUN_140069500(uVar6);
  ppuVar9 = &local_68;
  puVar5 = &local_50;
  FUN_140e63610(uVar6,param_2,&local_b8,1,puVar5,ppuVar9);
  local_78 = 0x8c;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  uStack_dc = 0xf;
  local_e8 = 0x1000000000000ee;
  uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  uVar7 = (ulonglong)puVar5 & 0xffffffffffffff00;
  FUN_140e87440(&local_e8,DAT_1419f5868,0x80000000,&local_c8,uVar7,uVar10);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140e87440(&local_c8,DAT_141a55540,0x80000000,&local_60,uVar7 & 0xffffffffffffff00,
                uVar10 & 0xffffffffffffff00);
  local_e8 = CONCAT44(uRam0000000141ddb6dc,_DAT_141ddb6d8);
  uStack_e0 = uRam0000000141ddb6e0;
  uStack_dc = DAT_141ddb6e4;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_e8);
  local_70 = &local_a8;
  uVar6 = 0;
  switch(local_bc) {
  case 0:
  case 7:
  case 10:
  case 0xd:
switchD_140d76620_caseD_0:
    uVar3 = FUN_140e4a8b0(&local_c8);
    uVar6 = FUN_140e87250(uVar3);
    break;
  case 6:
    uVar6 = local_c8;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_c8 >> 0x20);
    if ((iVar2 == 0x1000000) || (iVar2 == 0x4000001)) goto switchD_140d76620_caseD_0;
  }
  FUN_140e63610(uVar6,param_2,&local_d8,1,&local_60,&local_70);
  local_78 = 0x8d;
  uStack_dc = 0xd;
  local_e8 = 0x3ff0000000000000;
  if (&local_e8 != puVar4) {
    local_38 = 0;
    uStack_34 = 0x3ff00000;
    uStack_30 = uStack_e0;
    uStack_2c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_38);
  }
  local_78 = 0x8e;
LAB_140d766d1:
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  _eh_vector_destructor_iterator_(&local_a8,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

