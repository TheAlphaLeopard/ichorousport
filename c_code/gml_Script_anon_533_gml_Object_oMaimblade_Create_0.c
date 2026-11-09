// gml_Script_anon_533_gml_Object_oMaimblade_Create_0 @ 0x140b45e60

longlong *
gml_Script_anon_533_gml_Object_oMaimblade_Create_0
          (longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar13;
  longlong *plVar14;
  undefined4 uVar15;
  undefined1 **in_stack_fffffffffffffde0;
  ulonglong uVar16;
  undefined8 local_218;
  char *local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  longlong *local_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
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
  undefined4 local_12c;
  uint local_128 [2];
  undefined8 *local_120;
  undefined8 local_118;
  undefined4 local_10c;
  longlong *local_108;
  undefined4 local_fc;
  longlong *local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_210 = "gml_Script_anon@140@gml_Object_oLockedShop_Create_0";
  local_218 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_218;
  local_208 = 9;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_128,param_4,1,param_5);
  pcVar13 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_c8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57be0);
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c60);
  uVar6 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef678);
  uVar3 = local_128[0];
  local_12c = 0xffffff;
  local_138 = 0;
  uStack_13c = 0xffffff;
  local_148 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  uStack_16c = 0xffffff;
  local_178 = 0;
  uStack_19c = 0xffffff;
  local_1a8 = 0;
  uStack_17c = 0xffffff;
  local_188 = 0;
  local_1f4 = 0;
  uVar12 = 0;
  local_200 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_208 = 9;
  puVar11 = &DAT_1419df7b0;
  if ((int)local_128[0] < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*local_120;
  }
  iVar2 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_208 = 9;
    puVar7 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a56be0);
    if ((int)uVar3 < 1) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)*local_120;
    }
    if (puVar7 != puVar9) {
      local_1f0 = (longlong *)*puVar7;
      uStack_1e8 = *(undefined4 *)(puVar7 + 1);
      uStack_1e4 = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_1f0);
    }
    uVar3 = local_128[0];
  }
  local_208 = 0xb;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1ac = 0;
  local_1b8 = 0xc010000000000000;
  local_208 = 0xc;
  if (((int)uVar3 < 1) || (puVar11 = (undefined8 *)*local_120, puVar11 != &local_1c8)) {
    local_1f0 = (longlong *)*puVar11;
    uStack_1e8 = *(undefined4 *)(puVar11 + 1);
    uStack_1e4 = *(undefined4 *)((longlong)puVar11 + 0xc);
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_1f0);
  }
  local_208 = 0xe;
  local_18c = 0xf;
  local_198 = 0x1000000000000d6;
  iVar2 = FUN_140e63cb0(local_68,&local_res8,&local_res10,&local_198);
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if (0 < iVar2) {
    do {
      local_208 = 0x10;
      cVar1 = FUN_140e491e0(uVar4);
      if (cVar1 != '\0') {
        local_208 = 0x10;
        break;
      }
      local_208 = 0x11;
      cVar1 = FUN_140e491e0(uVar5);
      if (cVar1 == '\0') {
        local_208 = 0x11;
        break;
      }
      local_208 = 0x12;
      cVar1 = FUN_140e491e0(uVar6);
      if (cVar1 != '\0') {
        local_208 = 0x12;
        break;
      }
      local_208 = 0x13;
      uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57c10);
      cVar1 = FUN_140e491e0(uVar8);
      if (cVar1 == '\0') {
        local_208 = 0x13;
      }
      else {
        local_208 = 0x14;
        if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_200);
        }
        local_200 = 0;
        local_1f8 = 0;
        local_1f4 = 5;
        local_18c = 0xf;
        local_198 = 0x1000000000000ee;
        FUN_140e87440(&local_198,DAT_1419ff968,0x80000000,&local_138,
                      (ulonglong)pcVar13 & 0xffffffffffffff00,
                      (ulonglong)in_stack_fffffffffffffde0 & 0xffffffffffffff00);
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        local_10c = 0xf;
        local_118 = 0x1000000000000ee;
        uVar8 = FUN_140069500(&local_118);
        in_stack_fffffffffffffde0 = (undefined1 **)0x0;
        pcVar13 = (code *)&local_138;
        uVar8 = FUN_140e63610(uVar8,local_res10,&local_200,0,pcVar13,0);
        cVar1 = FUN_140e491e0(uVar8);
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        if (cVar1 == '\0') {
          local_208 = 0x14;
        }
        else {
          local_208 = 0x16;
          if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_200);
          }
          local_200 = 0;
          local_1f8 = 0;
          local_1f4 = 5;
          local_fc = 6;
          local_108 = local_res8;
          uVar16 = (ulonglong)in_stack_fffffffffffffde0 & 0xffffffffffffff00;
          uVar10 = (ulonglong)pcVar13 & 0xffffffffffffff00;
          FUN_140e87440(&local_108,DAT_1419fe0e8,0x80000000,&local_148,uVar10,uVar16);
          if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_108);
          }
          local_ec = 6;
          local_f8 = local_res8;
          FUN_140e87440(&local_f8,DAT_1419fe158,0x80000000,&local_158,uVar10 & 0xffffffffffffff00,
                        uVar16 & 0xffffffffffffff00);
          if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f8);
          }
          local_dc = 0xf;
          local_e8 = 0x1000000000000ee;
          FUN_140e87170(&local_e8,DAT_1419fe0e8,0x80000000,&local_168,local_res8,local_res10);
          if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e8);
          }
          local_cc = 0xf;
          local_d8 = 0x1000000000000ee;
          plVar14 = local_res8;
          FUN_140e87170(&local_d8,DAT_1419fe158,0x80000000,&local_178,local_res8,local_res10);
          uVar15 = (undefined4)((ulonglong)plVar14 >> 0x20);
          if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_d8);
          }
          local_1d8 = (undefined4)local_148;
          uStack_1d4 = local_148._4_4_;
          uStack_1d0 = uStack_140;
          uStack_1cc = uStack_13c;
          if ((1 << (local_c8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_c8);
          }
          FUN_140041b80(local_c8,&local_1d8);
          local_88 = local_c8;
          local_1d8 = (undefined4)local_158;
          uStack_1d4 = local_158._4_4_;
          uStack_1d0 = uStack_150;
          uStack_1cc = uStack_14c;
          if ((1 << (local_b8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_b8);
          }
          FUN_140041b80(local_b8,&local_1d8);
          local_80 = local_b8;
          local_1d8 = (undefined4)local_168;
          uStack_1d4 = local_168._4_4_;
          uStack_1d0 = uStack_160;
          uStack_1cc = uStack_15c;
          if ((1 << (local_a8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_a8);
          }
          FUN_140041b80(local_a8,&local_1d8);
          local_78 = local_a8;
          local_1d8 = (undefined4)local_178;
          uStack_1d4 = local_178._4_4_;
          uStack_1d0 = uStack_170;
          uStack_1cc = uStack_16c;
          if ((1 << (local_98[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_98);
          }
          FUN_140041b80(local_98,&local_1d8);
          local_70 = local_98;
          in_stack_fffffffffffffde0 = &local_88;
          pcVar13 = (code *)CONCAT44(uVar15,DAT_1419fd548);
          puVar11 = (undefined8 *)
                    FUN_140e634e0(local_res8,local_res10,&local_200,4,pcVar13,
                                  in_stack_fffffffffffffde0);
          if (puVar11 != &local_1a8) {
            local_1d8 = *(undefined4 *)puVar11;
            uStack_1d4 = *(undefined4 *)((longlong)puVar11 + 4);
            uStack_1d0 = *(undefined4 *)(puVar11 + 1);
            uStack_1cc = *(undefined4 *)((longlong)puVar11 + 0xc);
            if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1a8);
            }
            FUN_140041b80(&local_1a8,&local_1d8);
          }
          local_208 = 0x17;
          uVar3 = FUN_140e851f0(&local_1a8,&local_1c8,DAT_141955260,1);
          if (uVar3 < 0x80000000) {
            local_208 = 0x17;
          }
          else {
            local_208 = 0x19;
            uStack_1e4 = 6;
            local_1f0 = local_res8;
            in_stack_fffffffffffffde0 =
                 (undefined1 **)((ulonglong)in_stack_fffffffffffffde0 & 0xffffffffffffff00);
            pcVar13 = (code *)((ulonglong)pcVar13 & 0xffffffffffffff00);
            FUN_140e87440(&local_1f0,DAT_141a0a828,0x80000000,&local_188,pcVar13,
                          in_stack_fffffffffffffde0);
            if ((1 << ((byte)uStack_1e4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1f0);
            }
            local_1d8 = (undefined4)local_188;
            uStack_1d4 = local_188._4_4_;
            uStack_1d0 = uStack_180;
            uStack_1cc = uStack_17c;
            if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1b8);
            }
            FUN_140041b80(&local_1b8,&local_1d8);
            local_208 = 0x1a;
            local_1d8 = (undefined4)local_1a8;
            uStack_1d4 = local_1a8._4_4_;
            uStack_1d0 = uStack_1a0;
            uStack_1cc = uStack_19c;
            if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1c8);
            }
            FUN_140041b80(&local_1c8,&local_1d8);
          }
        }
      }
      cVar1 = FUN_140e643f0(local_68,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_68,&local_res8,&local_res10);
  local_208 = 0x1e;
  uStack_1e4 = 6;
  local_1f0 = local_res8;
  FUN_140e87440(&local_1f0,DAT_141a0a828,0x80000000,&local_188,
                (ulonglong)pcVar13 & 0xffffffffffffff00,
                (ulonglong)in_stack_fffffffffffffde0 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  iVar2 = FUN_140e851f0(&local_1b8,&local_188,DAT_141955260,0);
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (iVar2 == 0) {
    uVar12 = 0x3ff00000;
  }
  *param_3 = (ulonglong)uVar12 << 0x20;
  if (local_58 != 0) {
    FUN_140e4cd60();
    local_58 = 0;
  }
  if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_200);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
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
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,4,FUN_140041b30);
  if (0 < (int)local_128[0]) {
    uVar10 = (ulonglong)local_128[0];
    puVar11 = local_120;
    do {
      puVar7 = (undefined8 *)*puVar11;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 1) = 0;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 5;
      puVar11 = puVar11 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FUN_140e4cd60(local_120);
  DAT_141dc7a50 = (undefined8 *)local_218;
  return param_3;
}

