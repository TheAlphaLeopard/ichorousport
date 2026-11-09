// gml_Object_oParInteractable_Step_2 @ 0x140bacad0

longlong *
gml_Object_oParInteractable_Step_2
          (longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
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
  undefined8 local_res18;
  code *pcVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined4 uVar16;
  undefined1 **in_stack_fffffffffffffe00;
  ulonglong uVar17;
  undefined8 local_1f8;
  char *local_1f0;
  undefined4 local_1e8;
  longlong *local_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_16c;
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
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  undefined4 local_10c;
  longlong *local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  uint local_98 [2];
  undefined8 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_1f0 = "gml_Script_anon@2011@gml_Object_oParInteractable_Create_0";
  local_1f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1f8;
  local_1e8 = 100;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_98,param_4,1,param_5);
  pcVar13 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_d8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57be0);
  uVar6 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c60);
  local_res18 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef678);
  uStack_11c = 0xffffff;
  local_128 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  uStack_13c = 0xffffff;
  local_148 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  uStack_17c = 0xffffff;
  local_188 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_18c = 0;
  uVar12 = 0;
  local_198 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1e8 = 100;
  puVar11 = &DAT_1419df7b0;
  uVar10 = (ulonglong)local_98[0];
  if ((int)local_98[0] < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*local_90;
  }
  iVar3 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_1e8 = 100;
    puVar7 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a56be0);
    if ((int)local_98[0] < 1) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)*local_90;
    }
    if (puVar7 != puVar9) {
      local_1e0 = (longlong *)*puVar7;
      uStack_1d8 = *(undefined4 *)(puVar7 + 1);
      uStack_1d4 = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_1e0);
    }
  }
  local_1e8 = 0x66;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_19c = 0;
  local_1a8 = 0xc010000000000000;
  local_1e8 = 0x67;
  if (((int)local_98[0] < 1) || (puVar11 = (undefined8 *)*local_90, puVar11 != &local_1b8)) {
    local_1e0 = (longlong *)*puVar11;
    uStack_1d8 = *(undefined4 *)(puVar11 + 1);
    uStack_1d4 = *(undefined4 *)((longlong)puVar11 + 0xc);
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_1e0);
  }
  local_1e8 = 0x69;
  local_16c = 0xf;
  local_178 = 0x1000000000000d6;
  iVar3 = FUN_140e63cb0(local_68,&local_res8,&local_res10,&local_178);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  uVar1 = local_res18;
  if (0 < iVar3) {
    do {
      local_1e8 = 0x6b;
      cVar2 = FUN_140e491e0(uVar5);
      if (cVar2 != '\0') {
        local_1e8 = 0x6b;
        break;
      }
      local_1e8 = 0x6c;
      cVar2 = FUN_140e491e0(uVar6);
      if (cVar2 == '\0') {
        local_1e8 = 0x6c;
        break;
      }
      local_1e8 = 0x6d;
      cVar2 = FUN_140e491e0(uVar1);
      if (cVar2 != '\0') {
        local_1e8 = 0x6d;
        break;
      }
      local_1e8 = 0x6e;
      uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57c10);
      cVar2 = FUN_140e491e0(uVar8);
      if (cVar2 == '\0') {
        local_1e8 = 0x6e;
      }
      else {
        local_1e8 = 0x6f;
        uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a56bc0);
        local_16c = 0;
        local_178 = 0;
        iVar3 = FUN_140e851f0(uVar8,&local_178,DAT_141955260,1);
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        if (iVar3 < 1) {
          local_1e8 = 0x71;
          if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_198);
          }
          local_198 = 0;
          local_190 = 0;
          local_18c = 5;
          local_10c = 6;
          local_118 = local_res8;
          uVar17 = (ulonglong)in_stack_fffffffffffffe00 & 0xffffffffffffff00;
          uVar14 = (ulonglong)pcVar13 & 0xffffffffffffff00;
          FUN_140e87440(&local_118,DAT_1419fe0e8,0x80000000,&local_128,uVar14,uVar17);
          if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          local_fc = 6;
          local_108 = local_res8;
          FUN_140e87440(&local_108,DAT_1419fe158,0x80000000,&local_138,uVar14 & 0xffffffffffffff00,
                        uVar17 & 0xffffffffffffff00);
          if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_108);
          }
          local_ec = 0xf;
          local_f8 = 0x1000000000000ee;
          FUN_140e87170(&local_f8,DAT_1419fe0e8,0x80000000,&local_148,local_res8,local_res10);
          if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f8);
          }
          local_dc = 0xf;
          local_e8 = 0x1000000000000ee;
          plVar15 = local_res8;
          FUN_140e87170(&local_e8,DAT_1419fe158,0x80000000,&local_158,local_res8,local_res10);
          uVar16 = (undefined4)((ulonglong)plVar15 >> 0x20);
          if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e8);
          }
          local_1c8 = (undefined4)local_128;
          uStack_1c4 = local_128._4_4_;
          uStack_1c0 = uStack_120;
          uStack_1bc = uStack_11c;
          if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_d8);
          }
          FUN_140041b80(local_d8,&local_1c8);
          local_88 = local_d8;
          local_1c8 = (undefined4)local_138;
          uStack_1c4 = local_138._4_4_;
          uStack_1c0 = uStack_130;
          uStack_1bc = uStack_12c;
          if ((1 << (local_c8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_c8);
          }
          FUN_140041b80(local_c8,&local_1c8);
          local_80 = local_c8;
          local_1c8 = (undefined4)local_148;
          uStack_1c4 = local_148._4_4_;
          uStack_1c0 = uStack_140;
          uStack_1bc = uStack_13c;
          if ((1 << (local_b8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_b8);
          }
          FUN_140041b80(local_b8,&local_1c8);
          local_78 = local_b8;
          local_1c8 = (undefined4)local_158;
          uStack_1c4 = local_158._4_4_;
          uStack_1c0 = uStack_150;
          uStack_1bc = uStack_14c;
          if ((1 << (local_a8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_a8);
          }
          FUN_140041b80(local_a8,&local_1c8);
          local_70 = local_a8;
          in_stack_fffffffffffffe00 = &local_88;
          pcVar13 = (code *)CONCAT44(uVar16,DAT_1419fd548);
          puVar11 = (undefined8 *)
                    FUN_140e634e0(local_res8,local_res10,&local_198,4,pcVar13,
                                  in_stack_fffffffffffffe00);
          if (puVar11 != &local_188) {
            local_1c8 = *(undefined4 *)puVar11;
            uStack_1c4 = *(undefined4 *)((longlong)puVar11 + 4);
            uStack_1c0 = *(undefined4 *)(puVar11 + 1);
            uStack_1bc = *(undefined4 *)((longlong)puVar11 + 0xc);
            if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_188);
            }
            FUN_140041b80(&local_188,&local_1c8);
          }
          local_1e8 = 0x72;
          uVar4 = FUN_140e851f0(&local_188,&local_1b8,DAT_141955260,1);
          if (uVar4 < 0x80000000) {
            local_1e8 = 0x72;
          }
          else {
            local_1e8 = 0x74;
            uStack_1d4 = 6;
            local_1e0 = local_res8;
            in_stack_fffffffffffffe00 =
                 (undefined1 **)((ulonglong)in_stack_fffffffffffffe00 & 0xffffffffffffff00);
            pcVar13 = (code *)((ulonglong)pcVar13 & 0xffffffffffffff00);
            FUN_140e87440(&local_1e0,DAT_141a0a828,0x80000000,&local_168,pcVar13,
                          in_stack_fffffffffffffe00);
            if ((1 << ((byte)uStack_1d4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1e0);
            }
            local_1c8 = (undefined4)local_168;
            uStack_1c4 = local_168._4_4_;
            uStack_1c0 = uStack_160;
            uStack_1bc = uStack_15c;
            if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1a8);
            }
            FUN_140041b80(&local_1a8,&local_1c8);
            local_1e8 = 0x75;
            local_1c8 = (undefined4)local_188;
            uStack_1c4 = local_188._4_4_;
            uStack_1c0 = uStack_180;
            uStack_1bc = uStack_17c;
            if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1b8);
            }
            FUN_140041b80(&local_1b8,&local_1c8);
          }
        }
        else {
          local_1e8 = 0x6f;
        }
      }
      cVar2 = FUN_140e643f0(local_68,&local_res8,&local_res10);
    } while (cVar2 != '\0');
  }
  FUN_140e63970(local_68,&local_res8,&local_res10);
  local_1e8 = 0x7b;
  uStack_1d4 = 6;
  local_1e0 = local_res8;
  FUN_140e87440(&local_1e0,DAT_141a0a828,0x80000000,&local_168,
                (ulonglong)pcVar13 & 0xffffffffffffff00,
                (ulonglong)in_stack_fffffffffffffe00 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  iVar3 = FUN_140e851f0(&local_1a8,&local_168,DAT_141955260,0);
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (iVar3 == 0) {
    uVar12 = 0x3ff00000;
  }
  *param_3 = (ulonglong)uVar12 << 0x20;
  if (local_58 != 0) {
    FUN_140e4cd60();
    local_58 = 0;
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
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
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,4,FUN_140041b30);
  if (0 < (int)local_98[0]) {
    puVar11 = local_90;
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
  FUN_140e4cd60(local_90);
  DAT_141dc7a50 = (undefined8 *)local_1f8;
  return param_3;
}

