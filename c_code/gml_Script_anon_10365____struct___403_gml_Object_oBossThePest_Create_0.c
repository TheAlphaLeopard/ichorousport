// gml_Script_anon_10365____struct___403_gml_Object_oBossThePest_Create_0 @ 0x14081c490

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_10365____struct___403_gml_Object_oBossThePest_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined8 **ppuVar11;
  ulonglong in_stack_ffffffffffffff00;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  byte local_94;
  undefined1 local_90 [12];
  byte local_84;
  undefined1 local_80 [12];
  byte local_74;
  undefined8 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined4 local_4c;
  
  local_b0 = "gml_Script_anon@9969@___struct___402@gml_Object_oBossThePest_Create_0";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x23d;
  _eh_vector_constructor_iterator_(&local_a0,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x23f;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if (puVar5 != &local_a0) {
    local_d8 = *(undefined4 *)puVar5;
    uStack_d4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_d0 = *(undefined4 *)(puVar5 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    FUN_140041b80(&local_a0,&local_d8);
  }
  local_70 = &local_a0;
  local_d8 = _DAT_141dc6a30;
  uStack_d4 = uRam0000000141dc6a34;
  uStack_d0 = uRam0000000141dc6a38;
  uStack_cc = uRam0000000141dc6a3c;
  if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_90);
  }
  FUN_140041b80(local_90,&local_d8);
  local_68 = local_90;
  local_d8 = _DAT_1419e8ab0;
  uStack_d4 = uRam00000001419e8ab4;
  uStack_d0 = uRam00000001419e8ab8;
  uStack_cc = uRam00000001419e8abc;
  if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_80);
  }
  FUN_140041b80(local_80,&local_d8);
  local_60 = local_80;
  FUN_140e609c0(param_1);
  ppuVar11 = &local_70;
  puVar7 = (undefined4 *)gml_Script_arc(param_1,param_2,&local_f8,3,ppuVar11);
  if (puVar7 != puVar6) {
    local_d8 = *puVar7;
    uStack_d4 = puVar7[1];
    uStack_d0 = puVar7[2];
    uStack_cc = puVar7[3];
    if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_d8);
  }
  FUN_140e60910(1);
  local_a8 = 0x240;
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
  uVar9 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uStack_dc = *(undefined4 *)((longlong)puVar8 + 0xc);
  uStack_e0 = *(undefined4 *)(puVar8 + 1);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
    local_e8 = *puVar8;
  }
  else {
    FUN_1400419b0(&local_e8,puVar8);
  }
  FUN_140042560(&local_e8,uVar4);
  FUN_1400460e0(uVar9,&local_e8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_a8 = 0x242;
  if ((*(uint *)((longlong)puVar5 + 0xc) & 0xffffff) == 0) {
    uVar10 = (undefined4)*puVar5;
  }
  else {
    uVar10 = FUN_140e4b060(puVar5);
  }
  dVar1 = (double)FUN_140e78d00(uVar10);
  if (dVar1 - 0.2 <= DAT_141955260) {
    local_a8 = 0x249;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0x3ff0000000000000;
  }
  else {
    local_a8 = 0x244;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
  }
  local_bc = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_c8);
  local_a8 = 0x24d;
  uStack_dc = 0;
  local_e8 = 0;
  iVar2 = FUN_140e851f0(puVar5,&local_e8,DAT_141955260,0);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  uVar3 = 1 << ((byte)local_ec & 0x1f);
  if (iVar2 == 0) {
    local_a8 = 0x24e;
    if ((uVar3 & 0x46) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar4,DAT_141a55540,0x80000000,&local_58,(ulonglong)ppuVar11 & 0xffffffffffffff00,
                  in_stack_ffffffffffffff00 & 0xffffffffffffff00);
    local_d8 = _DAT_141dd6da8;
    uStack_d4 = uRam0000000141dd6dac;
    uStack_d0 = uRam0000000141dd6db0;
    uStack_cc = DAT_141dd6db4;
    if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    FUN_140041b80(&local_a0,&local_d8);
    local_70 = &local_a0;
    uVar4 = FUN_140069500(uVar4);
    puVar5 = &local_58;
    FUN_140e63610(uVar4,param_2,&local_f8,1,puVar5,&local_70);
    uVar10 = (undefined4)((ulonglong)puVar5 >> 0x20);
    local_a8 = 0x24f;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09cd8);
    local_d8 = _DAT_141dc6a30;
    uStack_d4 = uRam0000000141dc6a34;
    uStack_d0 = uRam0000000141dc6a38;
    uStack_cc = uRam0000000141dc6a3c;
    if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    FUN_140041b80(&local_a0,&local_d8);
    local_70 = &local_a0;
    FUN_140e609c0(param_1);
    puVar8 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_f8,1,CONCAT44(uVar10,DAT_141a0a0d8),&local_70);
    uStack_dc = *(undefined4 *)((longlong)puVar8 + 0xc);
    uStack_e0 = *(undefined4 *)(puVar8 + 1);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
      local_e8 = *puVar8;
    }
    else {
      FUN_1400419b0(&local_e8,puVar8);
    }
    uStack_cc = 7;
    local_d8 = 4;
    FUN_140042560(&local_e8,&local_d8);
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    if (&local_e8 != puVar5) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    local_a8 = 0x250;
  }
  else {
    local_a8 = 0x254;
    if ((uVar3 & 0x46) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
    FUN_140e63610(param_1,param_2,&local_f8,0,uVar4,0);
    local_a8 = 0x255;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd418);
    FUN_140e63610(param_1,param_2,&local_f8,0,uVar4,0);
    uVar10 = (undefined4)((ulonglong)uVar4 >> 0x20);
    local_a8 = 599;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57530);
    if (puVar5 != &local_a0) {
      local_d8 = *(undefined4 *)puVar5;
      uStack_d4 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_d0 = *(undefined4 *)(puVar5 + 1);
      uStack_cc = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a0);
      }
      FUN_140041b80(&local_a0,&local_d8);
    }
    local_70 = &local_a0;
    FUN_140e634e0(param_1,param_2,&local_f8,1,CONCAT44(uVar10,DAT_141a57c30),&local_70);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(&local_a0,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

