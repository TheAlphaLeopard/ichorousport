// gml_Script_anon_44_gml_Object_oBossThePestOld_Other_76 @ 0x14083e430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_44_gml_Object_oBossThePestOld_Other_76(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar8;
  undefined8 uVar7;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8 [3];
  byte local_dc;
  undefined4 local_d8 [3];
  byte local_cc;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 *local_90;
  undefined4 *local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_b0 = "gml_Object_oBossThePestOld_Step_0";
  local_a8 = 0;
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  _eh_vector_constructor_iterator_(local_e8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_4c = 0xffffff;
  local_58 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_a8 = 4;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  FUN_140e63610(param_1,param_2,&local_108,0,uVar3,0);
  local_a8 = 6;
  while( true ) {
    uVar8 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09d78);
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdd28);
    if (puVar4 != local_e8) {
      local_f8 = *puVar4;
      uStack_f4 = puVar4[1];
      uStack_f0 = puVar4[2];
      uStack_ec = puVar4[3];
      if ((1 << ((byte)_local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_f8);
    }
    local_90 = local_e8;
    uVar7 = CONCAT44(uVar8,DAT_1419f5e98);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_108,1,uVar7,&local_90);
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    iVar1 = FUN_140e851f0(uVar5,uVar3,DAT_141955260,1);
    if ((iVar1 == -2) || (iVar1 < 1)) break;
    local_a8 = 8;
    if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    local_a0 = 0;
    local_98 = 0;
    local_94 = 5;
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09d78);
    if (puVar4 != local_d8) {
      local_f8 = *puVar4;
      uStack_f4 = puVar4[1];
      uStack_f0 = puVar4[2];
      uStack_ec = puVar4[3];
      if ((1 << ((byte)_local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_f8);
    }
    local_88 = local_d8;
    local_f8 = _DAT_141dc6a50;
    uStack_f4 = uRam0000000141dc6a54;
    uStack_f0 = uRam0000000141dc6a58;
    uStack_ec = uRam0000000141dc6a5c;
    if ((1 << (local_c8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_f8);
    local_80 = local_c8;
    uVar3 = CONCAT44(uVar8,DAT_1419f5a78);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_a0,2,uVar3,&local_88);
    uVar8 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (puVar6 != &local_58) {
      local_f8 = *(undefined4 *)puVar6;
      uStack_f4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_f0 = *(undefined4 *)(puVar6 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_58);
      }
      FUN_140041b80(&local_58,&local_f8);
    }
    local_a8 = 9;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09d78);
    if (puVar4 != local_e8) {
      local_f8 = *puVar4;
      uStack_f4 = puVar4[1];
      uStack_f0 = puVar4[2];
      uStack_ec = puVar4[3];
      if ((1 << ((byte)_local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_f8);
    }
    local_90 = local_e8;
    local_f8 = _DAT_141dc6a50;
    uStack_f4 = uRam0000000141dc6a54;
    uStack_f0 = uRam0000000141dc6a58;
    uStack_ec = uRam0000000141dc6a5c;
    if ((1 << ((byte)_local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_f8);
    local_88 = local_d8;
    uVar3 = CONCAT44(uVar8,DAT_1419f5938);
    FUN_140e634e0(param_1,param_2,&local_108,2,uVar3,&local_90);
    local_a8 = 0xb;
    local_118 = 0x3ff0000000000000;
    uStack_10c = 0xd;
    local_f8 = 0;
    uStack_f4 = 0x3ff00000;
    uStack_f0 = uStack_110;
    uStack_ec = 0xd;
    if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140041b80(&local_48,&local_f8);
    FUN_140e87930(&local_58,DAT_1419fe308,0x80000000,&local_48);
  }
  local_a8 = 0xf;
  FUN_140e98b30(param_1,param_2);
  local_a8 = 0x11;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f2b0);
  uStack_10c = 10;
  local_118 = 0xb;
  iVar1 = FUN_140e851f0(uVar3,&local_118,DAT_141955260,0);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if (iVar1 != 0) {
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f2b0);
    uStack_10c = 10;
    local_118 = 0;
    iVar1 = FUN_140e851f0(uVar3,&local_118,DAT_141955260,0);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    if (iVar1 != 0) {
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f2b0);
      uStack_10c = 10;
      local_118 = 9;
      iVar1 = FUN_140e851f0(uVar3,&local_118,DAT_141955260,0);
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if (iVar1 != 0) {
        local_a8 = 0x14;
        if (puVar2 != &local_68) {
          local_f8 = *(undefined4 *)puVar2;
          uStack_f4 = *(undefined4 *)((longlong)puVar2 + 4);
          uStack_f0 = *(undefined4 *)(puVar2 + 1);
          uStack_ec = *(undefined4 *)((longlong)puVar2 + 0xc);
          if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_68);
          }
          FUN_140041b80(&local_68,&local_f8);
        }
        FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_68);
      }
    }
  }
  local_a8 = 0x16;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  if (puVar2 != &local_78) {
    local_f8 = *(undefined4 *)puVar2;
    uStack_f4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_f0 = *(undefined4 *)(puVar2 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_f8);
  }
  FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_78);
  local_a8 = 0x17;
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419feac8);
  FUN_140046040(uVar3);
  local_a8 = 0x19;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f090);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5a58);
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1ed50);
  uStack_10c = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_110 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) == 0) {
    local_118 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_118,puVar2);
  }
  FUN_140042560(&local_118,uVar5);
  iVar1 = FUN_140e851f0(uVar3,&local_118,DAT_141955260,1);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if (iVar1 != -2 && iVar1 < 1) {
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdae8);
    uStack_10c = 0;
    local_118 = 0x3ff0000000000000;
    iVar1 = FUN_140e851f0(uVar5,&local_118,DAT_141955260,0);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    if (iVar1 == 0) {
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f2b0);
      uStack_10c = 10;
      local_118 = 1;
      iVar1 = FUN_140e851f0(uVar5,&local_118,DAT_141955260,0);
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if (iVar1 == 0) {
        local_a8 = 0x1c;
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        local_108 = 0;
        local_100 = 0;
        local_fc = 5;
        local_f8 = _DAT_1419e8d40;
        uStack_f4 = uRam00000001419e8d44;
        uStack_f0 = uRam00000001419e8d48;
        uStack_ec = uRam00000001419e8d4c;
        if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_f8);
        local_90 = local_e8;
        local_f8 = (undefined4)DAT_1419df7b0;
        uStack_f4 = DAT_1419df7b0._4_4_;
        uStack_f0 = DAT_1419df7b8;
        uStack_ec = DAT_1419df7bc;
        if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d8);
        }
        FUN_140041b80(local_d8,&local_f8);
        local_88 = local_d8;
        gml_Script_truestate_begin_step(param_1,param_2,&local_108,2,&local_90);
      }
    }
  }
  local_a8 = 0x20;
  uStack_10c = 0;
  local_118 = 0x4014000000000000;
  iVar1 = FUN_140e851f0(uVar3,&local_118,DAT_141955260,1);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if (iVar1 != -2 && iVar1 < 1) {
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f2b0);
    (**(code **)(*param_1 + 8))(param_1,DAT_141a1f090);
    uStack_10c = 10;
    local_118 = 0x14;
    iVar1 = FUN_140e851f0(uVar3,&local_118,DAT_141955260,0);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    if (iVar1 != 0) {
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f2b0);
      uStack_10c = 10;
      local_118 = 0x11;
      iVar1 = FUN_140e851f0(uVar3,&local_118,DAT_141955260,0);
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if (iVar1 != 0) {
        local_a8 = 0x22;
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        local_108 = 0;
        local_100 = 0;
        local_fc = 5;
        local_f8 = _DAT_1419e8d50;
        uStack_f4 = uRam00000001419e8d54;
        uStack_f0 = uRam00000001419e8d58;
        uStack_ec = uRam00000001419e8d5c;
        if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_f8);
        local_90 = local_e8;
        local_f8 = (undefined4)DAT_1419df7b0;
        uStack_f4 = DAT_1419df7b0._4_4_;
        uStack_f0 = DAT_1419df7b8;
        uStack_ec = DAT_1419df7bc;
        if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d8);
        }
        FUN_140041b80(local_d8,&local_f8);
        local_88 = local_d8;
        gml_Script_truestate_begin_step(param_1,param_2,&local_108,2,&local_90);
      }
    }
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(local_e8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return;
}

