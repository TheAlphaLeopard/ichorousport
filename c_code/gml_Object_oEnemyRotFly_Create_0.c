// gml_Object_oEnemyRotFly_Create_0 @ 0x140a21e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oEnemyRotFly_Create_0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined1 **ppuVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  ulonglong in_stack_fffffffffffffec0;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined1 local_90 [12];
  byte local_84;
  undefined1 local_80 [12];
  byte local_74;
  undefined1 local_70 [12];
  byte local_64;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_a0 = "gml_Object_oEnemyRotCluster_Step_0";
  local_98 = 0;
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  _eh_vector_constructor_iterator_(local_90,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_10c = 0xffffff;
  local_118 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_98 = 3;
  FUN_140e98b30(param_1,param_2);
  local_98 = 5;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  uStack_12c = 0xf;
  local_138 = (longlong *)0x100000000000149;
  local_f8 = 0x100000000000149;
  uStack_f0 = uStack_130;
  uStack_ec = 0xf;
  if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_90);
  }
  FUN_140041b80(local_90,&local_f8);
  local_60 = local_90;
  ppuVar9 = &local_60;
  gml_GlobalScript_world_pos_to_gui(param_1,param_2,&local_118,1,ppuVar9);
  local_98 = 7;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f090);
  uStack_12c = 0;
  local_138 = (longlong *)0x0;
  iVar1 = FUN_140e851f0(uVar3,&local_138,DAT_141955260,1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (0 < iVar1) {
    uStack_12c = 6;
    uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
    local_138 = param_1;
    FUN_140e87440(&local_138,DAT_1419fe0e8,0x80000000,&local_b8,uVar10,
                  in_stack_fffffffffffffec0 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    uStack_12c = 0;
    local_138 = (longlong *)0x4030000000000000;
    iVar1 = FUN_140e851f0(&local_b8,&local_138,DAT_141955260,1);
    bVar8 = iVar1 != -2 && iVar1 < 0;
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    uVar11 = (undefined4)(uVar10 >> 0x20);
    if (iVar1 == -2 || iVar1 >= 0) {
      uStack_12c = 6;
      uVar3 = CONCAT71((int7)(uVar10 >> 8),bVar8);
      local_138 = param_1;
      FUN_140e87440(&local_138,DAT_1419fe0e8,0x80000000,&local_b8,uVar3,bVar8);
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140e85f80(param_1,DAT_141a00d18,0x80000000,&local_d8);
      local_11c = local_cc;
      local_120 = local_d0;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
        local_128 = local_d8;
      }
      else {
        FUN_1400419b0(&local_128,&local_d8);
      }
      uStack_12c = 7;
      local_138 = (longlong *)CONCAT44(local_138._4_4_,0x10);
      FUN_1400462a0(&local_128,&local_138);
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      iVar1 = FUN_140e851f0(&local_b8,&local_128,DAT_141955260,1);
      bVar8 = 0 < iVar1;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      uVar11 = (undefined4)((ulonglong)uVar3 >> 0x20);
      if (!bVar8) {
        uStack_12c = 6;
        uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),bVar8);
        local_138 = param_1;
        FUN_140e87440(&local_138,DAT_1419fe158,0x80000000,&local_c8,uVar3,bVar8);
        if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        uStack_12c = 0;
        local_138 = (longlong *)0x4030000000000000;
        iVar1 = FUN_140e851f0(&local_c8,&local_138,DAT_141955260,1);
        bVar8 = iVar1 != -2 && iVar1 < 0;
        if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        uVar11 = (undefined4)((ulonglong)uVar3 >> 0x20);
        if (iVar1 == -2 || iVar1 >= 0) {
          uStack_12c = 6;
          uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),bVar8);
          local_138 = param_1;
          FUN_140e87440(&local_138,DAT_1419fe158,0x80000000,&local_c8,uVar3,bVar8);
          uVar11 = (undefined4)((ulonglong)uVar3 >> 0x20);
          if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_138);
          }
          FUN_140e85f80(param_1,DAT_141a00c48,0x80000000,&local_e8);
          local_11c = local_dc;
          local_120 = local_e0;
          if ((1 << ((byte)local_dc & 0x1f) & 0x46U) == 0) {
            local_128 = local_e8;
          }
          else {
            FUN_1400419b0(&local_128,&local_e8);
          }
          uStack_12c = 7;
          local_138 = (longlong *)CONCAT44(local_138._4_4_,0x10);
          FUN_1400462a0(&local_128,&local_138);
          if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_138);
          }
          iVar1 = FUN_140e851f0(&local_c8,&local_128,DAT_141955260,1);
          if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_128);
          }
          if (iVar1 < 1) goto LAB_140a226cf;
        }
      }
    }
    local_98 = 9;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f090);
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5a58);
    puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f090);
    local_138 = (longlong *)CONCAT44(uRam0000000141dc6f44,_DAT_141dc6f40);
    uStack_130 = uRam0000000141dc6f48;
    uStack_12c = uRam0000000141dc6f4c;
    if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_90);
    }
    FUN_140041b80(local_90,&local_138);
    local_60 = local_90;
    local_138 = (longlong *)CONCAT44(uRam0000000141dc6f44,_DAT_141dc6f40);
    uStack_130 = uRam0000000141dc6f48;
    uStack_12c = uRam0000000141dc6f4c;
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_80);
    }
    FUN_140041b80(local_80,&local_138);
    local_58 = local_80;
    uVar3 = FUN_140e634e0(param_1,param_2,&local_108,1,CONCAT44(uVar11,DAT_141a0a0d8),&local_60);
    local_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
    local_120 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
      local_128 = *puVar5;
    }
    else {
      FUN_1400419b0(&local_128,puVar5);
    }
    FUN_140046500(&local_128,uVar3);
    uStack_12c = local_11c;
    uStack_130 = local_120;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
      local_138 = (longlong *)local_128;
    }
    else {
      FUN_1400419b0(&local_138,&local_128);
    }
    FUN_140042560(&local_138,uVar2);
    uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_f0 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
      local_f8 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_f8,puVar4);
    }
    FUN_1400462a0(&local_f8,&local_138);
    local_48 = (undefined4)local_f8;
    uStack_44 = local_f8._4_4_;
    uStack_40 = uStack_f0;
    uStack_3c = uStack_ec;
    if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_70);
    }
    FUN_140041b80(local_70,&local_48);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_50 = local_70;
    FUN_140e609c0(param_1);
    puVar7 = (undefined4 *)FUN_140e79090(&local_118,2,&local_58);
    if (puVar7 != puVar6) {
      local_48 = *puVar7;
      uStack_44 = puVar7[1];
      uStack_40 = puVar7[2];
      uStack_3c = puVar7[3];
      if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_48);
    }
    FUN_140e60910(1);
  }
LAB_140a226cf:
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_90,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return;
}

