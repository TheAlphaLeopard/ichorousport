// gml_Script_anon_9005_DefineTrinkets_TRINKETSINIT @ 0x1405e9710

undefined8 *
gml_Script_anon_9005_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar6;
  undefined4 uVar8;
  code *pcVar7;
  undefined4 **ppuVar9;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined1 local_b8 [16];
  undefined4 local_a8 [4];
  undefined1 local_98 [16];
  undefined1 local_88 [24];
  undefined4 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 local_58 [16];
  longlong local_48;
  
  local_d0 = "gml_Script_anon@8663@DefineTrinkets@TRINKETSINIT";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0x144;
  pcVar6 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_10c = 0;
  local_118 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0x146;
  uStack_fc = 0xf;
  local_108 = 0x10000000000009d;
  iVar2 = FUN_140e63cb0(local_58,&local_res8,&local_res10,&local_108);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if (0 < iVar2) {
    do {
      uVar8 = (undefined4)((ulonglong)pcVar6 >> 0x20);
      local_c8 = 0x148;
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      local_118 = 0;
      local_110 = 0;
      local_10c = 5;
      puVar4 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419ffb08);
      if (puVar4 != local_a8) {
        local_e8 = *puVar4;
        uStack_e4 = puVar4[1];
        uStack_e0 = puVar4[2];
        uStack_dc = puVar4[3];
        if ((1 << ((byte)local_a8[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_a8);
        }
        FUN_140041b80(local_a8,&local_e8);
      }
      local_70 = local_a8;
      ppuVar9 = &local_70;
      pcVar6 = (code *)CONCAT44(uVar8,DAT_141a02ef8);
      uVar5 = FUN_140e634e0(local_res8,local_res10,&local_118,1,pcVar6,ppuVar9);
      cVar1 = FUN_140e491e0(uVar5);
      if (cVar1 != '\0') {
        local_c8 = 0x149;
        pcVar7 = pcVar6;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
          pcVar7 = pcVar6;
        }
        local_128 = 0;
        local_120 = 0;
        local_11c = 5;
        pcVar6 = (code *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1edd0);
        FUN_140e87440(uVar3,DAT_1419f6028,0x80000000,&local_f8,
                      (ulonglong)pcVar7 & 0xffffffffffffff00,(ulonglong)ppuVar9 & 0xffffffffffffff00
                     );
        local_e8 = (undefined4)local_f8;
        uStack_e4 = local_f8._4_4_;
        uStack_e0 = uStack_f0;
        uStack_dc = uStack_ec;
        if ((1 << (local_98[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_98);
        }
        FUN_140041b80(local_98,&local_e8);
        local_68 = local_98;
        uStack_fc = 0xf;
        local_108 = 0x1000000000000ee;
        local_e8 = 0xee;
        uStack_e4 = 0x1000000;
        uStack_e0 = uStack_100;
        uStack_dc = 0xf;
        if ((1 << (local_88[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_88);
        }
        FUN_140041b80(local_88,&local_e8);
        local_60 = local_88;
        FUN_140e63610(local_res8,local_res10,&local_128,2,pcVar6,&local_68);
      }
      cVar1 = FUN_140e643f0(local_58,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_58,&local_res8,&local_res10);
  if (local_48 != 0) {
    FUN_140e4cd60();
    local_48 = 0;
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

