// gml_Script_anon_48122____struct___681_gml_Object_oPlayer_Create_0 @ 0x140c36370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_48122____struct___681_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  undefined8 **ppuVar14;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_150 = "gml_Script_anon@47190@___struct___680@gml_Object_oPlayer_Create_0";
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_148 = 0x9b1;
  _eh_vector_constructor_iterator_(&local_118,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  uVar6 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_17c = 0;
  local_188 = 0;
  local_134 = 0;
  local_140 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_148 = 0x9b3;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f89b8);
  uVar7 = FUN_140e63610(param_1,param_2,&local_188,0,uVar7,0);
  cVar3 = FUN_140e491e0(uVar7);
  if (cVar3 == '\0') {
    local_148 = 0x9b6;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a096c8);
    uVar13 = 0;
    uVar7 = FUN_140e63610(param_1,param_2,&local_188,0,uVar8,0);
    cVar3 = FUN_140e491e0(uVar7);
    if (cVar3 == '\0') {
      local_148 = 0x9bd;
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_188 = 0;
      local_180 = 0;
      local_17c = 5;
      uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8828);
      uVar7 = FUN_140e63610(param_1,param_2,&local_188,0,uVar7,0);
      cVar3 = FUN_140e491e0(uVar7);
      if (cVar3 == '\0') {
        local_148 = 0x9c0;
        puVar9 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
        uVar7 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
        uStack_15c = *(undefined4 *)((longlong)puVar9 + 0xc);
        uStack_160 = *(undefined4 *)(puVar9 + 1);
        if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
          local_168 = *puVar9;
        }
        else {
          FUN_1400419b0(&local_168,puVar9);
        }
        FUN_140042560(&local_168,uVar6);
        FUN_1400460e0(uVar7,&local_168);
        if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        local_148 = 0x9c1;
        puVar9 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
        uStack_16c = 0;
        local_178 = (longlong *)0x0;
        iVar4 = FUN_140e851f0(puVar9,&local_178,DAT_141955260,1);
        if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        bVar2 = false;
        bVar1 = true;
        if (iVar4 != -2 && iVar4 < 0) {
          if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          local_188 = 0;
          local_180 = 0;
          local_17c = 5;
          local_178 = (longlong *)CONCAT44(uRam00000001419ece14,_DAT_1419ece10);
          uStack_170 = uRam00000001419ece18;
          uStack_16c = uRam00000001419ece1c;
          if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          FUN_140041b80(&local_118,&local_178);
          local_d8 = &local_118;
          local_178 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_170 = DAT_1419df7b8;
          uStack_16c = DAT_1419df7bc;
          if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_108);
          }
          FUN_140041b80(local_108,&local_178);
          local_d0 = local_108;
          uVar6 = gml_Script_InputCheckMany(param_1,param_2,&local_188,2,&local_d8);
          cVar3 = FUN_140e491e0(uVar6);
          if (cVar3 == '\0') {
            local_148 = 0x9c1;
            if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_140);
            }
            local_140 = 0;
            local_138 = 0;
            local_134 = 5;
            puVar9 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
            puVar10 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ef9a8);
            puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
            if (puVar9 != &local_f8) {
              local_178 = (longlong *)*puVar9;
              uStack_170 = *(undefined4 *)(puVar9 + 1);
              uStack_16c = *(undefined4 *)((longlong)puVar9 + 0xc);
              if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_f8);
              }
              FUN_140041b80(&local_f8,&local_178);
            }
            local_c8 = &local_f8;
            uStack_15c = *(undefined4 *)((longlong)puVar10 + 0xc);
            uStack_160 = *(undefined4 *)(puVar10 + 1);
            if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
              local_168 = *puVar10;
            }
            else {
              FUN_1400419b0(&local_168,puVar10);
            }
            uStack_16c = 0;
            local_178 = (longlong *)0x4004000000000000;
            FUN_140046500(&local_168,&local_178);
            if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_178);
            }
            local_178 = (longlong *)local_168;
            uStack_170 = uStack_160;
            uStack_16c = uStack_15c;
            if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_e8);
            }
            FUN_140041b80(&local_e8,&local_178);
            if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_168);
            }
            local_c0 = &local_e8;
            FUN_140e609c0(param_1);
            puVar10 = (undefined8 *)FUN_140e79090(&local_140,2,&local_c8);
            if (puVar10 != puVar11) {
              local_178 = (longlong *)*puVar10;
              uStack_170 = *(undefined4 *)(puVar10 + 1);
              uStack_16c = *(undefined4 *)((longlong)puVar10 + 0xc);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar11);
              }
              FUN_140041b80(puVar11,&local_178);
            }
            FUN_140e60910(1);
          }
        }
        local_148 = 0x9c3;
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        local_188 = 0;
        local_180 = 0;
        local_17c = 5;
        uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff968);
        uVar13 = 0;
        uVar6 = FUN_140e63610(param_1,param_2,&local_188,0,uVar8,0);
        cVar3 = FUN_140e491e0(uVar6);
        if (cVar3 != '\0') {
          puVar9 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
          uStack_16c = 0;
          local_178 = (longlong *)0x0;
          uVar5 = FUN_140e851f0(puVar9,&local_178,DAT_141955260,1);
          if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          if (uVar5 < 0x80000000) {
            local_148 = 0x9c5;
            uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a066f8);
            uStack_16c = 0;
            local_178 = (longlong *)0x0;
            iVar4 = FUN_140e851f0(uVar6,&local_178,DAT_141955260,0);
            if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_178);
            }
            if (iVar4 == 0) {
              uStack_16c = DAT_141dda824;
              uStack_170 = DAT_141dda820;
              if ((1 << ((byte)DAT_141dda824 & 0x1f) & 0x46U) == 0) {
                local_178 = (longlong *)DAT_141dda818;
              }
              else {
                FUN_1400419b0(&local_178,&DAT_141dda818);
              }
              puVar9 = &local_178;
              bVar2 = true;
              bVar1 = false;
            }
            else {
              uStack_15c = DAT_141dda554;
              uStack_160 = DAT_141dda550;
              if ((1 << ((byte)DAT_141dda554 & 0x1f) & 0x46U) == 0) {
                local_168 = DAT_141dda548;
              }
              else {
                FUN_1400419b0(&local_168,&DAT_141dda548);
              }
              puVar9 = &local_168;
            }
            local_128 = *(undefined4 *)puVar9;
            uStack_124 = *(undefined4 *)((longlong)puVar9 + 4);
            uStack_120 = *(undefined4 *)(puVar9 + 1);
            uStack_11c = *(undefined4 *)((longlong)puVar9 + 0xc);
            if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_78);
            }
            FUN_140041b80(&local_78,&local_128);
            if ((bVar1) && ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0)) {
              FUN_140041a50(&local_168);
            }
            if ((bVar2) && ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0)) {
              FUN_140041a50(&local_178);
            }
            local_148 = 0x9c6;
            if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_188);
            }
            local_188 = 0;
            local_180 = 0;
            local_17c = 5;
            uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
            FUN_140e87440(uVar6,DAT_141a55540,0x80000000,&local_b8,uVar8 & 0xffffffffffffff00,
                          uVar13 & 0xffffffffffffff00);
            local_d8 = &local_78;
            uVar6 = FUN_140069500(uVar6);
            FUN_140e63610(uVar6,param_2,&local_188,1,&local_b8,&local_d8);
            local_148 = 0x9c7;
            if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_188);
            }
            local_188 = 0;
            local_180 = 0;
            local_17c = 5;
            uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f86d8);
            local_d8 = &local_78;
            FUN_140e63610(param_1,param_2,&local_188,1,uVar6,&local_d8);
            local_148 = 0x9c9;
            goto LAB_140c37831;
          }
        }
        local_148 = 0x9ce;
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        local_188 = 0;
        local_180 = 0;
        local_17c = 5;
        local_128 = (undefined4)DAT_1419df7b0;
        uStack_124 = DAT_1419df7b0._4_4_;
        uStack_120 = DAT_1419df7b8;
        uStack_11c = DAT_1419df7bc;
        if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_128);
        local_d8 = &local_118;
        local_128 = (undefined4)DAT_1419df7b0;
        uStack_124 = DAT_1419df7b0._4_4_;
        uStack_120 = DAT_1419df7b8;
        uStack_11c = DAT_1419df7bc;
        if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_108);
        }
        FUN_140041b80(local_108,&local_128);
        local_d0 = local_108;
        uVar6 = gml_Script_animcurve_lerp(param_1,param_2,&local_188,2,&local_d8);
        cVar3 = FUN_140e491e0(uVar6);
        if (cVar3 != '\0') {
          local_148 = 0x9d0;
          if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_88);
          }
          local_7c = 0;
          local_88 = 0;
          FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_88);
          local_148 = 0x9d1;
          if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_98);
          }
          local_8c = 0;
          local_98 = 0x3ff0000000000000;
          FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_98);
        }
        local_148 = 0x9d5;
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        local_188 = 0;
        local_180 = 0;
        local_17c = 5;
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8198);
        local_128 = _DAT_1419ecd20;
        uStack_124 = uRam00000001419ecd24;
        uStack_120 = uRam00000001419ecd28;
        uStack_11c = uRam00000001419ecd2c;
        if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_128);
        local_d8 = &local_118;
        local_128 = _DAT_1419ecd20;
        uStack_124 = uRam00000001419ecd24;
        uStack_120 = uRam00000001419ecd28;
        uStack_11c = uRam00000001419ecd2c;
        if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_108);
        }
        FUN_140041b80(local_108,&local_128);
        local_d0 = local_108;
        FUN_140e63610(param_1,param_2,&local_188,2,uVar6,&local_d8);
        local_148 = 0x9d7;
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        local_188 = 0;
        local_180 = 0;
        local_17c = 5;
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8778);
        FUN_140e63610(param_1,param_2,&local_188,0,uVar6,0);
        local_148 = 0x9d9;
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        local_188 = 0;
        local_180 = 0;
        local_17c = 5;
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8098);
        FUN_140e63610(param_1,param_2,&local_188,0,uVar6,0);
        local_148 = 0x9db;
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        local_188 = 0;
        local_180 = 0;
        local_17c = 5;
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
        FUN_140e63610(param_1,param_2,&local_188,0,uVar6,0);
        local_148 = 0x9dd;
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        local_188 = 0;
        local_180 = 0;
        local_17c = 5;
        uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
        uVar13 = 0;
        FUN_140e63610(param_1,param_2,&local_188,0,uVar8,0);
        local_148 = 0x9df;
        uStack_16c = 6;
        ppuVar14 = (undefined8 **)(uVar13 & 0xffffffffffffff00);
        uVar8 = uVar8 & 0xffffffffffffff00;
        local_178 = param_1;
        FUN_140e87440(&local_178,DAT_141a0a728,0x80000000,&local_68,uVar8,ppuVar14);
        if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        uStack_16c = 0xf;
        local_178 = (longlong *)0x100000100000419;
        iVar4 = FUN_140e851f0(&local_68,&local_178,DAT_141955260,0);
        if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        if (iVar4 == 0) {
          local_148 = 0x9e0;
          uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
          uVar7 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
          uStack_16c = 0;
          local_178 = (longlong *)0xc02e000000000000;
          FUN_140042560(&local_178,uVar6);
          FUN_1400460e0(uVar7,&local_178);
          if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
        }
        local_148 = 0x9e2;
        uStack_16c = 0;
        local_178 = (longlong *)0xbfe0000000000000;
        iVar4 = FUN_140e851f0(puVar9,&local_178,DAT_141955260,1);
        if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        if (iVar4 < 1) {
          if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          local_188 = 0;
          local_180 = 0;
          local_17c = 5;
          (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
          uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
          uStack_16c = 6;
          uVar13 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
          uVar8 = uVar8 & 0xffffffffffffff00;
          local_178 = param_1;
          FUN_140e87440(&local_178,DAT_1419fe0e8,0x80000000,&local_a8,uVar8,uVar13);
          if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          uStack_16c = 6;
          uVar8 = uVar8 & 0xffffffffffffff00;
          local_178 = param_1;
          FUN_140e87440(&local_178,DAT_1419fe158,0x80000000,&local_58,uVar8,
                        uVar13 & 0xffffffffffffff00);
          uVar12 = (undefined4)(uVar8 >> 0x20);
          if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          uStack_16c = 0;
          local_178 = (longlong *)0x4010000000000000;
          FUN_140042560(&local_178,uVar6);
          uStack_15c = local_9c;
          uStack_160 = local_a0;
          if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
            local_168 = local_a8;
          }
          else {
            FUN_1400419b0(&local_168,&local_a8);
          }
          FUN_1400460e0(&local_168,&local_178);
          local_128 = (undefined4)local_168;
          uStack_124 = local_168._4_4_;
          uStack_120 = uStack_160;
          uStack_11c = uStack_15c;
          if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          FUN_140041b80(&local_118,&local_128);
          if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
          if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          local_d8 = &local_118;
          local_128 = (undefined4)local_58;
          uStack_124 = local_58._4_4_;
          uStack_120 = uStack_50;
          uStack_11c = uStack_4c;
          if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_108);
          }
          FUN_140041b80(local_108,&local_128);
          local_d0 = local_108;
          uStack_16c = 0xf;
          local_178 = (longlong *)0x100000000000149;
          local_128 = 0x149;
          uStack_124 = 0x1000000;
          uStack_120 = uStack_170;
          uStack_11c = 0xf;
          if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f8);
          }
          FUN_140041b80(&local_f8,&local_128);
          local_c8 = &local_f8;
          ppuVar14 = &local_d8;
          uVar8 = CONCAT44(uVar12,DAT_141a12628);
          uVar6 = FUN_140e634e0(param_1,param_2,&local_188,3,uVar8,ppuVar14);
          cVar3 = FUN_140e491e0(uVar6);
          if (cVar3 == '\0') goto LAB_140c37831;
        }
        local_148 = 0x9e4;
        uStack_16c = 6;
        uVar13 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
        uVar8 = uVar8 & 0xffffffffffffff00;
        local_178 = param_1;
        FUN_140e87440(&local_178,DAT_141a0a728,0x80000000,&local_68,uVar8,uVar13);
        if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        uStack_16c = 0xf;
        local_178 = (longlong *)0x100000100000419;
        iVar4 = FUN_140e851f0(&local_68,&local_178,DAT_141955260,0);
        if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        if (iVar4 == 0) {
          local_148 = 0x9e5;
          if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_140);
          }
          local_140 = 0;
          local_138 = 0;
          local_134 = 5;
          uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
          FUN_140e87440(uVar6,DAT_141a55540,0x80000000,&local_b8,uVar8 & 0xffffffffffffff00,
                        uVar13 & 0xffffffffffffff00);
          local_128 = (undefined4)DAT_141dda7a8;
          uStack_124 = DAT_141dda7a8._4_4_;
          uStack_120 = DAT_141dda7b0;
          uStack_11c = DAT_141dda7b4;
          if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e8);
          }
          FUN_140041b80(&local_e8,&local_128);
          local_c0 = &local_e8;
          param_1 = (longlong *)FUN_140069500(uVar6);
          ppuVar14 = &local_c0;
          puVar10 = &local_140;
          puVar9 = &local_b8;
        }
        else {
          local_148 = 0x9e7;
          if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          local_188 = 0;
          local_180 = 0;
          local_17c = 5;
          uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
          FUN_140e87440(uVar6,DAT_141a55540,0x80000000,&local_b8,uVar8 & 0xffffffffffffff00,
                        uVar13 & 0xffffffffffffff00);
          local_128 = (undefined4)DAT_141dda668;
          uStack_124 = DAT_141dda668._4_4_;
          uStack_120 = DAT_141dda670;
          uStack_11c = DAT_141dda674;
          if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          FUN_140041b80(&local_118,&local_128);
          local_d8 = &local_118;
          uVar6 = FUN_140069500(uVar6);
          FUN_140e63610(uVar6,param_2,&local_188,1,&local_b8,&local_d8);
          local_148 = 0x9e8;
          if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          local_188 = 0;
          local_180 = 0;
          local_17c = 5;
          puVar9 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f86d8);
          local_128 = (undefined4)DAT_141dda668;
          uStack_124 = DAT_141dda668._4_4_;
          uStack_120 = DAT_141dda670;
          uStack_11c = DAT_141dda674;
          if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          FUN_140041b80(&local_118,&local_128);
          local_d8 = &local_118;
          ppuVar14 = &local_d8;
          puVar10 = &local_188;
        }
        FUN_140e63610(param_1,param_2,puVar10,1,puVar9,ppuVar14);
        local_148 = 0x9ec;
      }
      else {
        local_148 = 0x9be;
      }
    }
    else {
      local_148 = 0x9b8;
      if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_140);
      }
      local_140 = 0;
      local_138 = 0;
      local_134 = 5;
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
      FUN_140e87440(uVar6,DAT_141a55540,0x80000000,&local_b8,uVar8 & 0xffffffffffffff00,
                    uVar13 & 0xffffffffffffff00);
      local_178 = (longlong *)CONCAT44(DAT_141dda668._4_4_,(undefined4)DAT_141dda668);
      uStack_170 = DAT_141dda670;
      uStack_16c = DAT_141dda674;
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_178);
      local_d8 = &local_118;
      uVar6 = FUN_140069500(uVar6);
      FUN_140e63610(uVar6,param_2,&local_140,1,&local_b8,&local_d8);
      local_148 = 0x9b9;
    }
  }
  else {
    local_148 = 0x9b4;
  }
LAB_140c37831:
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_118,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return param_3;
}

