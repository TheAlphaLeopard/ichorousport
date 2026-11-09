// gml_Object_oFilthyGlare_Step_0 @ 0x140ad1890

undefined8 *
gml_Object_oFilthyGlare_Step_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 uVar10;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 **ppuVar11;
  ulonglong uVar12;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined4 local_68 [3];
  byte local_5c;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined4 *local_30;
  
  local_130 = "gml_Script_anon@238@gml_Object_oFilthyGlare_Create_0";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 0xb;
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_b8,0x10,6,FUN_1400424d0,FUN_140041b30);
  uStack_bc = 0xffffff;
  local_c8 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_14c = 0;
  local_158 = 0;
  local_15c = 0;
  local_168 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_128 = 0xc;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f2b98);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_128 = 0xd;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    if (puVar5 != &local_b8) {
      local_178 = *puVar5;
      uStack_170 = *(undefined4 *)(puVar5 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_178);
    }
    local_58 = &local_b8;
    uVar6 = CONCAT44(uVar10,DAT_141a02ef8);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_158,1,uVar6,&local_58);
    uVar10 = (undefined4)((ulonglong)uVar6 >> 0x20);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') {
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      uStack_16c = 0xf;
      local_178 = 0x1000000000000ee;
      local_148 = 0xee;
      uStack_144 = 0x1000000;
      uStack_140 = uStack_170;
      uStack_13c = 0xf;
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_148);
      local_50 = local_a8;
      uVar4 = FUN_140e634e0(param_1,param_2,&local_168,1,CONCAT44(uVar10,DAT_141a02ef8),&local_50);
      cVar1 = FUN_140e491e0(uVar4);
      if (cVar1 != '\0') {
        local_128 = 0xe;
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_158 = 0;
        local_150 = 0;
        local_14c = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe698);
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
        FUN_140e87170(uVar6,DAT_1419fe0e8,0x80000000,&local_c8,param_1,param_2);
        FUN_140e87170(uVar6,DAT_1419fe158,0x80000000,&local_d8,param_1,param_2);
        uStack_16c = 0xf;
        local_178 = 0x1000000000000ee;
        FUN_140e87170(&local_178,DAT_1419fe0e8,0x80000000,&local_e8,param_1,param_2);
        if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        uStack_16c = 0xf;
        local_178 = 0x1000000000000ee;
        plVar8 = param_1;
        FUN_140e87170(&local_178,DAT_1419fe158,0x80000000,&local_f8,param_1,param_2);
        uVar10 = (undefined4)((ulonglong)plVar8 >> 0x20);
        if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_148 = (undefined4)local_c8;
        uStack_144 = local_c8._4_4_;
        uStack_140 = uStack_c0;
        uStack_13c = uStack_bc;
        if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        FUN_140041b80(&local_b8,&local_148);
        local_58 = &local_b8;
        local_148 = (undefined4)local_d8;
        uStack_144 = local_d8._4_4_;
        uStack_140 = uStack_d0;
        uStack_13c = uStack_cc;
        if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_a8);
        }
        FUN_140041b80(local_a8,&local_148);
        local_148 = (undefined4)local_e8;
        uStack_144 = local_e8._4_4_;
        uStack_140 = uStack_e0;
        uStack_13c = uStack_dc;
        local_50 = local_a8;
        if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_98);
        }
        FUN_140041b80(local_98,&local_148);
        local_48 = local_98;
        local_148 = (undefined4)local_f8;
        uStack_144 = local_f8._4_4_;
        uStack_140 = uStack_f0;
        uStack_13c = uStack_ec;
        if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_88);
        }
        FUN_140041b80(local_88,&local_148);
        local_40 = local_88;
        ppuVar11 = &local_58;
        uVar9 = CONCAT44(uVar10,DAT_1419fd548);
        uVar6 = FUN_140e634e0(param_1,param_2,&local_158,4,uVar9,ppuVar11);
        iVar2 = FUN_140e851f0(uVar6,uVar4,DAT_141955260,1);
        if (0 < iVar2) {
          local_128 = 0xf;
          if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
          local_168 = 0;
          local_160 = 0;
          local_15c = 5;
          puVar7 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
          uStack_16c = 0xf;
          local_178 = 0x1000000000000ee;
          uVar12 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
          uVar9 = uVar9 & 0xffffffffffffff00;
          FUN_140e87440(&local_178,DAT_141a1edd0,0x80000000,&local_108,uVar9,uVar12);
          if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          FUN_140e87440(uVar3,DAT_1419f6028,0x80000000,&local_118,uVar9 & 0xffffffffffffff00,
                        uVar12 & 0xffffffffffffff00);
          local_148 = (undefined4)local_118;
          uStack_144 = local_118._4_4_;
          uStack_140 = uStack_110;
          uStack_13c = uStack_10c;
          if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_78);
          }
          FUN_140041b80(local_78,&local_148);
          local_38 = local_78;
          if (puVar7 != local_68) {
            local_148 = *puVar7;
            uStack_144 = puVar7[1];
            uStack_140 = puVar7[2];
            uStack_13c = puVar7[3];
            if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_68);
            }
            FUN_140041b80(local_68,&local_148);
          }
          local_30 = local_68;
          uStack_16c = 0xf;
          local_178 = 0x1000000000000ee;
          uVar3 = FUN_140069500(&local_178);
          FUN_140e63610(uVar3,param_2,&local_168,2,&local_108,&local_38);
          if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
        }
        goto LAB_140ad1f28;
      }
    }
    local_128 = 0xd;
  }
  else {
    local_128 = 0xc;
  }
LAB_140ad1f28:
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return param_3;
}

