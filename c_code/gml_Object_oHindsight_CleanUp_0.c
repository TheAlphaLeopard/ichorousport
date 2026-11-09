// gml_Object_oHindsight_CleanUp_0 @ 0x140b069b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oHindsight_CleanUp_0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint *puVar8;
  longlong *local_res8;
  longlong *local_res10;
  undefined4 uVar11;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 **ppuVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  uint local_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  char *local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  uint uStack_120;
  uint uStack_11c;
  undefined8 local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_b8 [12];
  byte local_ac;
  uint local_a8 [3];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  uint *local_50;
  undefined1 *local_48;
  undefined1 local_38 [16];
  longlong local_28;
  
  local_1a0 = "gml_Object_oHindsight_Step_0";
  local_198 = 0;
  local_1a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1a8;
  uVar11 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_118,0x10,9,FUN_1400424d0,FUN_140041b30);
  local_1ac = 0xffffff;
  local_1b8 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  uStack_13c = 0xffffff;
  local_148 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_174 = 0xffffff;
  local_180 = 0;
  local_184 = 0xffffff;
  local_190 = 0;
  local_198 = 2;
  puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5c98);
  if (puVar4 != &local_118) {
    local_1d8 = (longlong *)*puVar4;
    uStack_1d0 = *(undefined4 *)(puVar4 + 1);
    uStack_1cc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_1d8);
  }
  local_88 = &local_118;
  uVar5 = FUN_140e634e0(local_res8,local_res10,&local_1e8,1,CONCAT44(uVar11,DAT_141a02ef8),&local_88
                       );
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_198 = 4;
    FUN_140edd0e0(local_res8,local_res10,0,0);
    local_198 = 5;
  }
  else {
    local_198 = 0xb;
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a848);
    uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ab8);
    uVar2 = FUN_140e851f0(uVar5,uVar6,DAT_141955260,1);
    if (uVar2 < 0x80000000) {
      local_198 = 0xd;
      FUN_140edd0e0(local_res8,local_res10,0,0);
      local_198 = 0xe;
    }
    else {
      local_198 = 0x11;
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_1e8 = 0;
      local_1e0 = 0;
      local_1dc = 5;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd398);
      uVar6 = FUN_140e63610(local_res8,local_res10,&local_1e8,0,uVar5,0);
      uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
      cVar1 = FUN_140e491e0(uVar6);
      if (cVar1 != '\0') {
        local_198 = 0x13;
        puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5c98);
        if (puVar4 != &local_1b8) {
          local_1d8 = (longlong *)*puVar4;
          uStack_1d0 = *(undefined4 *)(puVar4 + 1);
          uStack_1cc = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          FUN_140041b80(&local_1b8,&local_1d8);
        }
        local_198 = 0x14;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1e8 = 0;
        local_1e0 = 0;
        local_1dc = 5;
        puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5c98);
        if (puVar4 != &local_118) {
          local_1d8 = (longlong *)*puVar4;
          uStack_1d0 = *(undefined4 *)(puVar4 + 1);
          uStack_1cc = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          FUN_140041b80(&local_118,&local_1d8);
        }
        local_1d8 = (longlong *)CONCAT44(uRam0000000141dd94ac,_DAT_141dd94a8);
        uStack_1d0 = uRam0000000141dd94b0;
        uStack_1cc = DAT_141dd94b4;
        local_88 = &local_118;
        if ((1 << ((byte)_local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_108);
        }
        FUN_140041b80(local_108,&local_1d8);
        local_80 = local_108;
        ppuVar12 = &local_88;
        uVar9 = CONCAT44(uVar11,DAT_141a56cf0);
        uVar5 = FUN_140e634e0(local_res8,local_res10,&local_1e8,2,uVar9,ppuVar12);
        cVar1 = FUN_140e491e0(uVar5);
        if (cVar1 != '\0') {
          local_198 = 0x16;
          if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          local_1ac = 0;
          local_1b8 = 0xc010000000000000;
          local_198 = 0x17;
          uStack_1cc = 0xf;
          local_1d8 = (longlong *)0x1000000000000d7;
          iVar3 = FUN_140e63cb0(local_38,&local_res8,&local_res10,&local_1d8);
          if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          if (0 < iVar3) {
            do {
              local_198 = 0x19;
              uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f0d0);
              uVar6 = (**(code **)(*local_res10 + 8))(local_res10,DAT_1419f5c98);
              iVar3 = FUN_140e851f0(uVar5,uVar6,DAT_141955260,0);
              if (iVar3 == 0) {
                local_198 = 0x19;
                uStack_1cc = 6;
                local_1d8 = local_res8;
                ppuVar12 = (undefined8 **)((ulonglong)ppuVar12 & 0xffffffffffffff00);
                uVar9 = uVar9 & 0xffffffffffffff00;
                FUN_140e87440(&local_1d8,DAT_141a0a828,0x80000000,&local_128,uVar9,ppuVar12);
                if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1d8);
                }
                local_1c8 = (uint)local_128;
                uStack_1c4 = local_128._4_4_;
                uStack_1c0 = uStack_120;
                uStack_1bc = uStack_11c;
                if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1b8);
                }
                FUN_140041b80(&local_1b8,&local_1c8);
              }
              cVar1 = FUN_140e643f0(local_38,&local_res8,&local_res10);
            } while (cVar1 != '\0');
          }
          FUN_140e63970(local_38,&local_res8,&local_res10);
          if (local_28 != 0) {
            FUN_140e4cd60();
          }
        }
        uVar11 = (undefined4)(uVar9 >> 0x20);
        local_198 = 0x1d;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1e8 = 0;
        local_1e0 = 0;
        local_1dc = 5;
        local_88 = &local_1b8;
        uVar5 = FUN_140e634e0(local_res8,local_res10,&local_1e8,1,CONCAT44(uVar11,DAT_141a02ef8),
                              &local_88);
        cVar1 = FUN_140e491e0(uVar5);
        if (cVar1 != '\0') {
          local_198 = 0x1e;
          if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_180);
          }
          local_180 = 0;
          local_178 = 0;
          local_174 = 5;
          if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_190);
          }
          local_190 = 0;
          local_188 = 0;
          local_184 = 5;
          uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419ff338);
          FUN_140e87170(uVar5,DAT_1419fe0e8,0x80000000,&local_138,local_res8,local_res10);
          plVar10 = local_res8;
          plVar13 = local_res10;
          FUN_140e87170(uVar5,DAT_1419fe158,0x80000000,&local_148,local_res8,local_res10);
          uVar14 = (ulonglong)plVar13 & 0xffffffffffffff00;
          uVar9 = (ulonglong)plVar10 & 0xffffffffffffff00;
          FUN_140e87440(uVar5,DAT_141a1f4e0,0x80000000,&local_158,uVar9,uVar14);
          uVar9 = uVar9 & 0xffffffffffffff00;
          FUN_140e87440(uVar5,DAT_141a0a7d8,0x80000000,&local_168,uVar9,uVar14 & 0xffffffffffffff00)
          ;
          uVar11 = (undefined4)(uVar9 >> 0x20);
          local_1c8 = DAT_141a575a0 & 0xffffff;
          uStack_1c4 = (int)(DAT_141a575a0 | 0x5000000) >> 0x18 & 0xff;
          if (uStack_1c4 == 0xf) {
            uStack_1c4 = 0x4000004;
          }
          else {
            uStack_1c4 = uStack_1c4 | 0x1000000;
          }
          uStack_1cc = 0xf;
          local_1d8 = (longlong *)(CONCAT44(uStack_1c4,DAT_141a575a0) & 0xffffffff00ffffff);
          uStack_1c0 = uStack_1d0;
          uStack_1bc = 0xf;
          if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_108);
          }
          FUN_140041b80(local_108,&local_1c8);
          local_80 = local_108;
          local_1c8 = (uint)local_138;
          uStack_1c4 = local_138._4_4_;
          uStack_1c0 = uStack_130;
          uStack_1bc = uStack_12c;
          if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_f8);
          }
          FUN_140041b80(local_f8,&local_1c8);
          local_78 = local_f8;
          local_1c8 = (uint)local_148;
          uStack_1c4 = local_148._4_4_;
          uStack_1c0 = uStack_140;
          uStack_1bc = uStack_13c;
          if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_e8);
          }
          FUN_140041b80(local_e8,&local_1c8);
          local_70 = local_e8;
          local_1c8 = (uint)local_158;
          uStack_1c4 = local_158._4_4_;
          uStack_1c0 = uStack_150;
          uStack_1bc = uStack_14c;
          if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_d8);
          }
          FUN_140041b80(local_d8,&local_1c8);
          local_68 = local_d8;
          local_60 = &local_1b8;
          local_1c8 = (uint)local_168;
          uStack_1c4 = local_168._4_4_;
          uStack_1c0 = uStack_160;
          uStack_1bc = uStack_15c;
          if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_b8);
          }
          FUN_140041b80(local_b8,&local_1c8);
          local_58 = local_b8;
          puVar7 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_190,6,
                                         CONCAT44(uVar11,DAT_1419fd6d8),&local_80);
          if (puVar7 != local_a8) {
            local_1c8 = *puVar7;
            uStack_1c4 = puVar7[1];
            uStack_1c0 = puVar7[2];
            uStack_1bc = puVar7[3];
            if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_a8);
            }
            FUN_140041b80(local_a8,&local_1c8);
          }
          local_50 = local_a8;
          local_1c8 = (uint)DAT_1419df7b0;
          uStack_1c4 = DAT_1419df7b0._4_4_;
          uStack_1c0 = DAT_1419df7b8;
          uStack_1bc = DAT_1419df7bc;
          if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_98);
          }
          FUN_140041b80(local_98,&local_1c8);
          local_48 = local_98;
          gml_Script_draw_line_sprite(local_res8,local_res10,&local_180,2,&local_50);
        }
        local_198 = 0x1f;
        puVar7 = (uint *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5a58);
        puVar8 = (uint *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f090);
        FUN_140e609c0(local_res8);
        if (puVar7 != puVar8) {
          local_1c8 = *puVar7;
          uStack_1c4 = puVar7[1];
          uStack_1c0 = puVar7[2];
          uStack_1bc = puVar7[3];
          if ((1 << ((byte)puVar8[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar8);
          }
          FUN_140041b80(puVar8,&local_1c8);
        }
        FUN_140e60910(1);
      }
      local_198 = 0x21;
      uVar5 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
      FUN_140046040(uVar5);
    }
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  _eh_vector_destructor_iterator_(&local_118,0x10,9,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1a8;
  return;
}

