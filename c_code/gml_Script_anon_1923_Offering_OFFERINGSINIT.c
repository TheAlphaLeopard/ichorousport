// gml_Script_anon_1923_Offering_OFFERINGSINIT @ 0x1403bea50

undefined8 *
gml_Script_anon_1923_Offering_OFFERINGSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 **ppuVar4;
  bool bVar5;
  undefined4 uVar6;
  code *pcVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong in_stack_fffffffffffffeb0;
  undefined1 *local_148;
  undefined4 local_140;
  uint local_13c;
  undefined1 *local_138;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  byte local_8c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined1 *local_58 [6];
  
  local_e0 = "gml_Script_anon@524@Offering@OFFERINGSINIT";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0x11;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_98,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_13c = 0xffffff;
  local_148 = (undefined1 *)0x0;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57320);
  uStack_9c = 0xffffff;
  local_a8 = (undefined1 *)0x0;
  local_ec = 0xffffff;
  local_f8 = 0;
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a572b0);
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_fc = 0;
  local_108 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0x12;
  ppuVar4 = (undefined1 **)(**(code **)(*param_1 + 8))(param_1,DAT_1419f6238);
  if (ppuVar4 != &local_148) {
    local_128 = *ppuVar4;
    uStack_120 = *(undefined4 *)(ppuVar4 + 1);
    uStack_11c = *(undefined4 *)((longlong)ppuVar4 + 0xc);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_128);
  }
  local_d8 = 0x13;
  uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
  FUN_140e87440(uVar2,DAT_1419f5b98,0x80000000,&local_a8,uVar8,
                in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
  uVar6 = (undefined4)(uVar8 >> 0x20);
  local_128 = local_a8;
  uStack_120 = uStack_a0;
  uStack_11c = uStack_9c;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_128);
  local_d8 = 0x14;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  if (puVar3 != &local_98) {
    local_128 = (undefined1 *)*puVar3;
    uStack_120 = *(undefined4 *)(puVar3 + 1);
    uStack_11c = *(uint *)((longlong)puVar3 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_128);
  }
  local_68 = &local_98;
  local_60 = &local_f8;
  uVar9 = CONCAT44(uVar6,DAT_141a573f0);
  uVar2 = FUN_140e634e0(param_1,param_2,&local_108,2,uVar9,&local_68);
  uStack_12c = 0;
  local_138 = &DAT_bff0000000000000;
  iVar1 = FUN_140e851f0(uVar2,&local_138,DAT_141955260,0);
  bVar5 = iVar1 == 0;
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (!bVar5) {
    uVar2 = CONCAT71((int7)((ulonglong)uVar9 >> 8),bVar5);
    FUN_140e87440(&local_f8,DAT_1419f5948,0x80000000,&local_c0,uVar2,bVar5);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),bVar5);
    FUN_140e87440(&local_c0,DAT_1419f5ff8,0x80000000,&local_d0,uVar2,bVar5);
    uVar6 = (undefined4)((ulonglong)uVar2 >> 0x20);
    uStack_12c = 0;
    local_138 = (undefined1 *)0x4000000000000000;
    iVar1 = FUN_140e851f0(&local_d0,&local_138,DAT_141955260,1);
    if (iVar1 != -2) {
      bVar5 = iVar1 < 0;
    }
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if (bVar5) {
      local_d8 = 0x15;
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      local_118 = 0;
      local_110 = 0;
      local_10c = 5;
      uStack_12c = local_13c;
      uStack_130 = local_140;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
        local_138 = local_148;
      }
      else {
        FUN_1400419b0(&local_138,&local_148);
      }
      uStack_11c = 0;
      local_128 = (undefined1 *)0x4000000000000000;
      FUN_140046500(&local_138,&local_128);
      if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = local_138;
      uStack_120 = uStack_130;
      uStack_11c = uStack_12c;
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_78);
      }
      FUN_140041b80(local_78,&local_128);
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      local_58[0] = local_78;
      ppuVar4 = (undefined1 **)
                FUN_140e634e0(param_1,param_2,&local_118,1,CONCAT44(uVar6,DAT_1419fe728),local_58);
      if (ppuVar4 != &local_148) {
        local_128 = *ppuVar4;
        uStack_120 = *(undefined4 *)(ppuVar4 + 1);
        uStack_11c = *(uint *)((longlong)ppuVar4 + 0xc);
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_128);
      }
    }
  }
  local_d8 = 0x17;
  if ((local_13c & 0xffffff) == 0) {
    uVar6 = SUB84(local_148,0);
  }
  else {
    uVar6 = FUN_140e4b060(&local_148);
  }
  uVar2 = FUN_140e78ec0(uVar6,0,0x402c000000000000);
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  *param_3 = uVar2;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

