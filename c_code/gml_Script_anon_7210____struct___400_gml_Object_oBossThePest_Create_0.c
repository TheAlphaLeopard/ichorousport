// gml_Script_anon_7210____struct___400_gml_Object_oBossThePest_Create_0 @ 0x140816610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_7210____struct___400_gml_Object_oBossThePest_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 **ppuVar5;
  ulonglong uVar6;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined1 local_70 [12];
  byte local_64;
  undefined1 local_60 [12];
  byte local_54;
  undefined1 local_50 [12];
  byte local_44;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_90 = "gml_Script_anon@6990@___struct___399@gml_Object_oBossThePest_Create_0";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x1a0;
  _eh_vector_constructor_iterator_(local_70,0x10,3,FUN_1400424d0,FUN_140041b30);
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_74 = 0xffffff;
  local_80 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_cc = 0;
  local_d8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x1a2;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uStack_bc = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_c0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) == 0) {
    local_c8 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_c8,puVar3);
  }
  FUN_140042560(&local_c8,puVar2);
  FUN_1400460e0(uVar4,&local_c8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_88 = 0x1a3;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
  uVar6 = 0;
  FUN_140e63610(param_1,param_2,&local_d8,0,uVar4,0);
  local_88 = 0x1a5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  local_c8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_c0 = DAT_1419df7b8;
  uStack_bc = DAT_1419df7bc;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_70);
  }
  FUN_140041b80(local_70,&local_c8);
  local_40 = local_70;
  local_c8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_c0 = DAT_1419df7b8;
  uStack_bc = DAT_1419df7bc;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_c8);
  local_38 = local_60;
  ppuVar5 = &local_40;
  uVar4 = gml_Script_animcurve_lerp(param_1,param_2,&local_d8,2,ppuVar5);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_88 = 0x1a7;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar4,DAT_141a55540,0x80000000,&local_80,(ulonglong)ppuVar5 & 0xffffffffffffff00,
                  uVar6 & 0xffffffffffffff00);
    local_c8 = CONCAT44(uRam0000000141dd6dac,_DAT_141dd6da8);
    uStack_c0 = uRam0000000141dd6db0;
    uStack_bc = DAT_141dd6db4;
    if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_50);
    }
    FUN_140041b80(local_50,&local_c8);
    local_30 = local_50;
    uVar4 = FUN_140069500(uVar4);
    FUN_140e63610(uVar4,param_2,&local_b8,1,&local_80,&local_30);
  }
  local_88 = 0x1aa;
  if (puVar2 != &local_a8) {
    local_c8 = *puVar2;
    uStack_c0 = *(undefined4 *)(puVar2 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_c8);
  }
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_a8);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

