// gml_Script_anon_4610____struct___397_gml_Object_oBossThePest_Create_0 @ 0x140813050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_4610____struct___397_gml_Object_oBossThePest_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 **ppuVar5;
  ulonglong in_stack_ffffffffffffff00;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined1 local_80 [12];
  byte local_74;
  undefined1 local_70 [12];
  byte local_64;
  undefined1 local_60 [12];
  byte local_54;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  local_d0 = "gml_Script_anon@4267@___struct___396@gml_Object_oBossThePest_Create_0";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0x104;
  _eh_vector_constructor_iterator_(local_80,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_84 = 0xffffff;
  local_90 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_ec = 0;
  local_f8 = 0;
  local_b4 = 0;
  local_c0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0x105;
  local_e8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_e0 = DAT_1419df7b8;
  uStack_dc = DAT_1419df7bc;
  if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_80);
  }
  FUN_140041b80(local_80,&local_e8);
  local_50 = local_80;
  local_e8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_e0 = DAT_1419df7b8;
  uStack_dc = DAT_1419df7bc;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_70);
  }
  FUN_140041b80(local_70,&local_e8);
  local_48 = local_70;
  ppuVar5 = &local_50;
  uVar3 = gml_Script_animcurve_lerp(param_1,param_2,&local_f8,2,ppuVar5);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_c8 = 0x107;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09ba8);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 == '\0') {
      local_c8 = 0x108;
      if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c0);
      }
      local_c0 = 0;
      local_b8 = 0;
      local_b4 = 5;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
      FUN_140e87440(uVar3,DAT_141a55540,0x80000000,&local_90,(ulonglong)ppuVar5 & 0xffffffffffffff00
                    ,in_stack_ffffffffffffff00 & 0xffffffffffffff00);
      local_e8 = CONCAT44(uRam0000000141dd6dac,_DAT_141dd6da8);
      uStack_e0 = uRam0000000141dd6db0;
      uStack_dc = DAT_141dd6db4;
      if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_60);
      }
      FUN_140041b80(local_60,&local_e8);
      local_40 = local_60;
      puVar4 = &local_c0;
      ppuVar5 = &local_40;
    }
    else {
      local_c8 = 0x10a;
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_f8 = 0;
      local_f0 = 0;
      local_ec = 5;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
      FUN_140e87440(uVar3,DAT_141a55540,0x80000000,&local_90,(ulonglong)ppuVar5 & 0xffffffffffffff00
                    ,in_stack_ffffffffffffff00 & 0xffffffffffffff00);
      local_e8 = CONCAT44(uRam0000000141dd6d3c,_DAT_141dd6d38);
      uStack_e0 = uRam0000000141dd6d40;
      uStack_dc = DAT_141dd6d44;
      if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_80);
      }
      FUN_140041b80(local_80,&local_e8);
      local_50 = local_80;
      puVar4 = &local_f8;
      ppuVar5 = &local_50;
    }
    uVar3 = FUN_140069500(uVar3);
    FUN_140e63610(uVar3,param_2,puVar4,1,&local_90,ppuVar5);
    local_c8 = 0x10c;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57560);
    if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    local_94 = 0;
    local_a0 = 0x3ff0000000000000;
    FUN_140e87930(uVar3,DAT_141a0a748,0x80000000,&local_a0);
  }
  local_c8 = 0x10f;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_e0 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
    local_e8 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_e8,puVar4);
  }
  FUN_140042560(&local_e8,puVar2);
  FUN_1400460e0(uVar3,&local_e8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_c8 = 0x110;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
  FUN_140e63610(param_1,param_2,&local_f8,0,uVar3,0);
  local_c8 = 0x111;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd418);
  FUN_140e63610(param_1,param_2,&local_f8,0,uVar3,0);
  local_c8 = 0x112;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  FUN_140e63610(param_1,param_2,&local_f8,0,uVar3,0);
  local_c8 = 0x113;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  local_c8 = 0x114;
  if (puVar2 != &local_b0) {
    local_e8 = *puVar2;
    uStack_e0 = *(undefined4 *)(puVar2 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b0);
    }
    FUN_140041b80(&local_b0,&local_e8);
  }
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_b0);
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  _eh_vector_destructor_iterator_(local_80,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

