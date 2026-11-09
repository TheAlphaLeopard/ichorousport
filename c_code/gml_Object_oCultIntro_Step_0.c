// gml_Object_oCultIntro_Step_0 @ 0x1408da150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Object_oCultIntro_Step_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  
  local_a0 = "gml_Script_anon@745@gml_Object_oCultIntro_Create_0";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x22;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_e8,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_fc = 0xffffff;
  uVar5 = 0;
  local_108 = 0;
  local_74 = 0;
  local_80 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x24;
  puVar3 = (undefined8 *)FUN_140e8da20(&local_80,param_1,0);
  uVar4 = 0xffffff;
  if (puVar3 != &local_108) {
    local_c8 = *puVar3;
    uStack_c0 = *(undefined4 *)(puVar3 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar3 + 0xc);
    FUN_140041b80(&local_108,&local_c8);
    uVar4 = uStack_fc;
  }
  local_98 = 0x25;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a45ac8);
  local_84 = *(undefined4 *)((longlong)puVar3 + 0xc);
  local_88 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) == 0) {
    local_90 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_90,puVar3);
  }
  local_64 = 0xf;
  local_70 = 0x100000000000026;
  local_50 = 0xf;
  local_5c = 0x100000000000032;
  local_4c = 1;
  local_3c = 0xf;
  local_48 = 0x10000000000002a;
  local_38 = 2;
  do {
    iVar2 = FUN_140e851f0((longlong)&local_70 + (longlong)(int)uVar5 * 0x14,&local_90,DAT_141955260,
                          0);
    uVar7 = (undefined4)((ulonglong)pcVar6 >> 0x20);
    if (iVar2 == 0) {
      iVar2 = *(int *)((longlong)&local_64 + (longlong)(int)uVar5 * 0x14 + 4);
      bVar1 = (byte)local_10c;
      if (iVar2 == 0) {
        local_98 = 0x29;
        if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        local_118 = 0;
        local_110 = 0;
        local_10c = 5;
        uStack_bc = 0xf;
        local_c8 = 0x100000100000309;
        local_f8 = 0x309;
        uStack_f4 = 0x1000001;
        uStack_f0 = uStack_c0;
        uStack_ec = 0xf;
        if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_f8);
        local_f8 = _DAT_141dc6ce0;
        uStack_f4 = uRam0000000141dc6ce4;
        uStack_f0 = uRam0000000141dc6ce8;
        uStack_ec = uRam0000000141dc6cec;
      }
      else if (iVar2 == 1) {
        local_98 = 0x30;
        if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        local_118 = 0;
        local_110 = 0;
        local_10c = 5;
        uStack_bc = 0xf;
        local_c8 = 0x100000100000379;
        local_f8 = 0x379;
        uStack_f4 = 0x1000001;
        uStack_f0 = uStack_c0;
        uStack_ec = 0xf;
        if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_f8);
        local_f8 = _DAT_1419e9be0;
        uStack_f4 = uRam00000001419e9be4;
        uStack_f0 = uRam00000001419e9be8;
        uStack_ec = uRam00000001419e9bec;
      }
      else {
        if (iVar2 != 2) break;
        local_98 = 0x37;
        if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        local_118 = 0;
        local_110 = 0;
        local_10c = 5;
        uStack_bc = 0xf;
        local_c8 = 0x10000010000031d;
        local_f8 = 0x31d;
        uStack_f4 = 0x1000001;
        uStack_f0 = uStack_c0;
        uStack_ec = 0xf;
        if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_f8);
        local_f8 = _DAT_1419e9bd0;
        uStack_f4 = uRam00000001419e9bd4;
        uStack_f0 = uRam00000001419e9bd8;
        uStack_ec = uRam00000001419e9bdc;
      }
      local_b8 = local_e8;
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_f8);
      local_b0 = local_d8;
      puVar3 = (undefined8 *)
               FUN_140e634e0(param_1,param_2,&local_118,2,CONCAT44(uVar7,DAT_1419fdca8),&local_b8);
      if (puVar3 != &local_108) {
        local_f8 = *(undefined4 *)puVar3;
        uStack_f4 = *(undefined4 *)((longlong)puVar3 + 4);
        uStack_f0 = *(undefined4 *)(puVar3 + 1);
        uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)uVar4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        FUN_140041b80(&local_108,&local_f8);
        uVar4 = uStack_fc;
      }
      break;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 3);
  local_98 = 0x3d;
  if (&local_108 != param_3) {
    local_f8 = (undefined4)local_108;
    uStack_f4 = local_108._4_4_;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_f8);
  }
  _eh_vector_destructor_iterator_(&local_70,0x14,3,FUN_1400662d0);
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)uVar4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(local_e8,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

