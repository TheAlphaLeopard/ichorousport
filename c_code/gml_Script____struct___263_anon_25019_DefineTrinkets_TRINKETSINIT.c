// gml_Script____struct___263_anon_25019_DefineTrinkets_TRINKETSINIT @ 0x140600c90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___263_anon_25019_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar6;
  ulonglong uVar5;
  undefined4 **ppuVar7;
  undefined1 **ppuVar8;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined4 local_a8 [3];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined4 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38 [2];
  
  ppuVar7 = &local_58;
  local_c0 = "gml_Script_anon@24446@DefineTrinkets@TRINKETSINIT";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x3b3;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(local_a8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_10c = 0;
  local_118 = 0;
  local_ec = 0;
  local_f8 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0x3b4;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  if (puVar2 != local_a8) {
    local_128 = *puVar2;
    uStack_124 = puVar2[1];
    uStack_120 = puVar2[2];
    uStack_11c = puVar2[3];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_128);
  }
  local_58 = local_a8;
  local_128 = _DAT_141dd4c88;
  uStack_124 = uRam0000000141dd4c8c;
  uStack_120 = uRam0000000141dd4c90;
  uStack_11c = DAT_141dd4c94;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_128);
  local_50 = local_98;
  uVar5 = CONCAT44(uVar6,DAT_1419fcba8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_118,2,uVar5,ppuVar7);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    uVar5 = uVar5 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_1419ff7d8,0x80000000,&local_d8,uVar5,
                  (ulonglong)ppuVar7 & 0xffffffffffffff00);
    uVar6 = (undefined4)(uVar5 >> 0x20);
    local_128 = (undefined4)local_d8;
    uStack_124 = local_d8._4_4_;
    uStack_120 = uStack_d0;
    uStack_11c = uStack_cc;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_128);
    local_48 = local_88;
    local_128 = _DAT_1419e6a60;
    uStack_124 = uRam00000001419e6a64;
    uStack_120 = uRam00000001419e6a68;
    uStack_11c = uRam00000001419e6a6c;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_128);
    local_40 = local_78;
    ppuVar8 = &local_48;
    uVar5 = CONCAT44(uVar6,DAT_141a01af8);
    uVar3 = FUN_140e634e0(param_1,param_2,&local_f8,2,uVar5,ppuVar8);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 != '\0') {
      local_b8 = 0x3b5;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_108 = 0;
      local_100 = 0;
      local_fc = 5;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
      uVar5 = uVar5 & 0xffffffffffffff00;
      FUN_140e87440(uVar3,DAT_1419ff7d8,0x80000000,&local_d8,uVar5,
                    (ulonglong)ppuVar8 & 0xffffffffffffff00);
      uVar6 = (undefined4)(uVar5 >> 0x20);
      local_128 = (undefined4)local_d8;
      uStack_124 = local_d8._4_4_;
      uStack_120 = uStack_d0;
      uStack_11c = uStack_cc;
      if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_68);
      }
      FUN_140041b80(local_68,&local_128);
      local_38[0] = local_68;
      FUN_140e634e0(param_1,param_2,&local_108,1,CONCAT44(uVar6,DAT_141a57c30),local_38);
      goto LAB_1406010a4;
    }
  }
  uVar6 = (undefined4)(uVar5 >> 0x20);
  local_b8 = 0x3b7;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_118,0,CONCAT44(uVar6,DAT_1419ef5d8),0)
  ;
  if (puVar4 != &local_e8) {
    local_128 = *(undefined4 *)puVar4;
    uStack_124 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_120 = *(undefined4 *)(puVar4 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_128);
  }
  FUN_140e87930(uVar3,DAT_1419ff7d8,0x80000000,&local_e8);
LAB_1406010a4:
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

