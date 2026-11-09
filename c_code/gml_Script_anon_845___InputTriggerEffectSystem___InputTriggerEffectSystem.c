// gml_Script_anon_845___InputTriggerEffectSystem___InputTriggerEffectSystem @ 0x1400df430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_845___InputTriggerEffectSystem___InputTriggerEffectSystem
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  byte bVar14;
  uint uVar15;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  uint local_res20;
  ulonglong uVar16;
  undefined4 uVar17;
  ulonglong in_stack_fffffffffffffe20;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  double local_1c8;
  uint local_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  uint local_198;
  uint uStack_194;
  uint uStack_190;
  uint uStack_18c;
  undefined8 local_188;
  char *local_180;
  undefined4 local_178;
  uint local_170 [2];
  undefined8 *local_168;
  ulonglong local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  ulonglong local_138 [2];
  ulonglong local_128 [2];
  uint local_118 [4];
  undefined1 local_108 [16];
  uint local_f8 [4];
  undefined1 local_e8 [16];
  ulonglong local_d8;
  uint uStack_cc;
  ulonglong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulonglong *local_b8;
  ulonglong *local_b0;
  uint *local_a8;
  undefined1 *local_a0;
  uint *local_98;
  undefined1 *local_90;
  undefined1 local_88 [16];
  longlong local_78;
  
  local_180 = "gml_Script___InputTriggerEffectStop";
  local_188 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_188;
  local_178 = 5;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_140041df0(local_170,param_4,1,param_5);
  uVar17 = 1;
  _eh_vector_constructor_iterator_(local_138,0x10,6,FUN_1400424d0,FUN_140041b30);
  uStack_bc = 0xffffff;
  local_c8 = 0;
  bVar14 = 0xff;
  local_res20 = 0xffffff;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0.0;
  local_1cc = 0;
  local_1d8 = 0;
  local_19c = 0;
  local_1a8 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc8e8) &&
     (_Init_thread_header(&DAT_141ddc8e8), DAT_141ddc8e8 == -1)) {
    DAT_141ddc8e0 = (longlong *)FUN_140e63aa0(DAT_141a03e48);
    _Init_thread_footer(&DAT_141ddc8e8);
  }
  puVar11 = local_168;
  local_178 = 5;
  puVar12 = &DAT_1419df7b0;
  uVar13 = (ulonglong)local_170[0];
  if ((int)local_170[0] < 1) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)*local_168;
  }
  iVar3 = FUN_140e851f0(puVar10,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar3 == 0) && (local_178 = 5, 0 < (int)local_170[0])) &&
     (puVar11 = (undefined8 *)*puVar11, puVar11 != &DAT_1419df7b0)) {
    local_1b8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_1b0 = DAT_1419df7b8;
    uStack_1ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar11);
    }
    FUN_140041b80(puVar11,&local_1b8);
  }
  if (DAT_141ddc067 == '\0') {
    FUN_140e64380(DAT_141ddc8e0,"gml_Script___InputTriggerEffectStop");
    FUN_140e64380(local_res8,"gml_Script___InputTriggerEffectStop");
  }
  local_178 = 7;
  if (DAT_141ddc067 == '\0') {
    DAT_141ddc067 = '\x01';
    puVar6 = (ulonglong *)(**(code **)(*DAT_141ddc8e0 + 0x10))(DAT_141ddc8e0,DAT_1419febe8);
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    uVar16 = 0;
    uVar7 = gml_Script___InputVerbGroupsConfig(local_res8,local_res10,&local_1d8,0,0);
    uVar16 = uVar16 & 0xffffffffffffff00;
    FUN_140e87440(uVar7,DAT_1419febc8,0x80000000,&local_c8,uVar16,
                  in_stack_fffffffffffffe20 & 0xffffffffffffff00);
    uVar17 = (undefined4)(uVar16 >> 0x20);
    FUN_140e609c0(DAT_141ddc8e0);
    if (&local_c8 != puVar6) {
      local_1b8 = local_c8;
      uStack_1b0 = uStack_c0;
      uStack_1ac = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_1b8);
    }
    FUN_140e60910(1);
  }
  puVar11 = local_168;
  iVar3 = 0;
  local_178 = 9;
  if ((int)local_170[0] < 1) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)*local_168;
  }
  iVar4 = FUN_140e851f0(puVar10,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 != 0) {
    local_178 = 0x1d;
    if ((int)local_170[0] < 1) {
      puVar11 = &DAT_1419df7b0;
    }
    else {
      puVar11 = (undefined8 *)*puVar11;
    }
    uStack_14c = 0;
    local_158 = 0;
    iVar3 = FUN_140e851f0(puVar11,&local_158,DAT_141955260,1);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    if (iVar3 == -2 || -1 < iVar3) {
      local_178 = 0x1f;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      puVar6 = (ulonglong *)(**(code **)(*DAT_141ddc8e0 + 8))(DAT_141ddc8e0,DAT_1419febe8);
      if (puVar6 != local_138) {
        local_1b8 = *puVar6;
        uStack_1b0 = (undefined4)puVar6[1];
        uStack_1ac = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)local_138[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_138);
        }
        FUN_140041b80(local_138,&local_1b8);
      }
      local_b8 = local_138;
      if (((int)local_170[0] < 1) || (puVar12 = (ulonglong *)*local_168, puVar12 != local_128)) {
        local_1b8 = *puVar12;
        uStack_1b0 = (undefined4)puVar12[1];
        uStack_1ac = *(undefined4 *)((longlong)puVar12 + 0xc);
        if ((1 << ((byte)local_128[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_128);
        }
        FUN_140041b80(local_128,&local_1b8);
      }
      local_b0 = local_128;
      uVar8 = CONCAT44(uVar17,DAT_1419ff4f8);
      uVar7 = FUN_140e634e0(local_res8,local_res10,&local_1d8,2,uVar8,&local_b8);
      iVar3 = FUN_140e63cb0(local_88,&local_res8,&local_res10,uVar7);
      if (0 < iVar3) {
        do {
          uVar17 = (undefined4)((ulonglong)uVar8 >> 0x20);
          local_178 = 0x21;
          if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          local_1a8 = 0;
          local_1a0 = 0;
          local_19c = 5;
          if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          local_148 = 0;
          local_140 = 0;
          local_13c = 5;
          uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a03d28);
          local_198 = DAT_141a03618 & 0xffffff;
          uStack_194 = (int)(DAT_141a03618 | 0x5000000) >> 0x18 & 0xff;
          if (uStack_194 == 0xf) {
            uStack_194 = 0x4000004;
          }
          else {
            uStack_194 = uStack_194 | 0x1000000;
          }
          uStack_14c = 0xf;
          local_158 = CONCAT44(uStack_194,DAT_141a03618) & 0xffffffff00ffffff;
          uStack_190 = uStack_150;
          uStack_18c = 0xf;
          if ((1 << ((byte)local_118[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_118);
          }
          FUN_140041b80(local_118,&local_198);
          local_a8 = local_118;
          local_198 = _DAT_1419e1bc0;
          uStack_194 = uRam00000001419e1bc4;
          uStack_190 = uRam00000001419e1bc8;
          uStack_18c = uRam00000001419e1bcc;
          if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_108);
          }
          FUN_140041b80(local_108,&local_198);
          local_a0 = local_108;
          puVar9 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_148,1,
                                         CONCAT44(uVar17,DAT_1419fd6d8),&local_a8);
          if (puVar9 != local_f8) {
            local_198 = *puVar9;
            uStack_194 = puVar9[1];
            uStack_190 = puVar9[2];
            uStack_18c = puVar9[3];
            if ((1 << ((byte)local_f8[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_f8);
            }
            FUN_140041b80(local_f8,&local_198);
          }
          local_98 = local_f8;
          local_198 = _DAT_141dc6130;
          uStack_194 = uRam0000000141dc6134;
          uStack_190 = uRam0000000141dc6138;
          uStack_18c = uRam0000000141dc613c;
          if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_e8);
          }
          FUN_140041b80(local_e8,&local_198);
          local_90 = local_e8;
          uVar7 = uVar8;
          FUN_140e63610(local_res8,local_res10,&local_1a8,3,uVar8,&local_a0);
          uVar17 = (undefined4)((ulonglong)uVar7 >> 0x20);
          local_178 = 0x22;
          if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          local_1d8 = 0;
          local_1d0 = 0;
          local_1cc = 5;
          if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          local_1a8 = 0;
          local_1a0 = 0;
          local_19c = 5;
          local_198 = DAT_141a03618 & 0xffffff;
          uStack_194 = (int)(DAT_141a03618 | 0x5000000) >> 0x18 & 0xff;
          if (uStack_194 == 0xf) {
            uStack_194 = 0x4000004;
          }
          else {
            uStack_194 = uStack_194 | 0x1000000;
          }
          uStack_1ac = 0xf;
          local_1b8 = CONCAT44(uStack_194,DAT_141a03618) & 0xffffffff00ffffff;
          uStack_190 = uStack_1b0;
          uStack_18c = 0xf;
          if ((1 << ((byte)local_138[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_138);
          }
          FUN_140041b80(local_138,&local_198);
          local_b8 = local_138;
          local_198 = _DAT_1419e1bd0;
          uStack_194 = uRam00000001419e1bd4;
          uStack_190 = uRam00000001419e1bd8;
          uStack_18c = uRam00000001419e1bdc;
          if ((1 << ((byte)local_128[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_128);
          }
          FUN_140041b80(local_128,&local_198);
          local_b0 = local_128;
          puVar9 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_1a8,1,
                                         CONCAT44(uVar17,DAT_1419fd6d8),&local_b8);
          if (puVar9 != local_118) {
            local_198 = *puVar9;
            uStack_194 = puVar9[1];
            uStack_190 = puVar9[2];
            uStack_18c = puVar9[3];
            if ((1 << ((byte)local_118[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_118);
            }
            FUN_140041b80(local_118,&local_198);
          }
          local_a8 = local_118;
          local_198 = _DAT_141dc6130;
          uStack_194 = uRam0000000141dc6134;
          uStack_190 = uRam0000000141dc6138;
          uStack_18c = uRam0000000141dc613c;
          if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_108);
          }
          FUN_140041b80(local_108,&local_198);
          local_a0 = local_108;
          FUN_140e63610(local_res8,local_res10,&local_1d8,3,uVar8,&local_b0);
          cVar2 = FUN_140e643f0(local_88,&local_res8,&local_res10);
        } while (cVar2 != '\0');
      }
      FUN_140e63970(local_88,&local_res8,&local_res10);
      puVar11 = local_168;
      if (local_78 != 0) {
        FUN_140e4cd60();
        local_78 = 0;
      }
    }
    else {
      local_178 = 0x1d;
      puVar11 = local_168;
    }
    goto LAB_1400e00c0;
  }
  local_178 = 0xb;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  local_1b8 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_1b0 = uRam00000001419df7a8;
  uStack_1ac = uRam00000001419df7ac;
  if ((1 << ((byte)local_138[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_1b8);
  local_b8 = local_138;
  puVar12 = (ulonglong *)
            gml_Script_InputDeviceGetAnyGamepadConnected
                      (local_res8,local_res10,&local_1d8,1,&local_b8);
  uVar16 = 0;
  uVar15 = 0xffffff;
  if (puVar12 != &local_d8) {
    local_1b8 = *puVar12;
    uStack_1b0 = (undefined4)puVar12[1];
    uStack_1ac = *(undefined4 *)((longlong)puVar12 + 0xc);
    FUN_140041b80(&local_d8,&local_1b8);
    local_res20 = uStack_cc;
    uVar16 = local_d8;
    uVar15 = uStack_cc;
  }
  local_178 = 0xd;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1bc = 0;
  local_1c8 = 0.0;
  if ((uVar15 == 2) && (uVar16 != 0)) {
    iVar3 = *(int *)(uVar16 + 0x24);
  }
  if (0 < iVar3) {
    do {
      iVar3 = iVar3 + -1;
      local_178 = 0x10;
      iVar4 = FUN_140e4a740(&local_1c8);
      puVar12 = (ulonglong *)0x0;
      if (((uVar15 & 0xffffff) == 2) && (uVar16 != 0)) {
        if ((iVar4 < 0) || (*(int *)(uVar16 + 0x24) <= iVar4)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                        *(undefined4 *)(uVar16 + 0x24));
        }
        else {
          puVar12 = (ulonglong *)((longlong)iVar4 * 0x10 + *(longlong *)(uVar16 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        puVar12 = &local_d8;
      }
      if ((int)local_170[0] < 1) {
        puVar6 = &DAT_1419df7b0;
      }
      else {
        puVar6 = (ulonglong *)*puVar11;
      }
      if (puVar12 != puVar6) {
        local_1b8 = *puVar12;
        uStack_1b0 = (undefined4)puVar12[1];
        uStack_1ac = *(undefined4 *)((longlong)puVar12 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_1b8);
      }
      puVar11 = local_168;
      local_178 = 0x11;
      if ((int)local_170[0] < 1) {
        puVar10 = &DAT_1419df7b0;
      }
      else {
        puVar10 = (undefined8 *)*local_168;
      }
      uStack_14c = 0;
      local_158 = 0;
      uVar5 = FUN_140e851f0(puVar10,&local_158,DAT_141955260,1);
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      if (uVar5 < 0x80000000) {
        local_178 = 0x13;
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        local_1d8 = 0;
        local_1d0 = 0;
        local_1cc = 5;
        if ((int)local_170[0] < 1) {
          puVar12 = &DAT_1419df7b0;
LAB_1400df9d5:
          local_1b8 = *puVar12;
          uStack_1b0 = (undefined4)puVar12[1];
          uStack_1ac = *(undefined4 *)((longlong)puVar12 + 0xc);
          if ((1 << ((byte)local_138[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_138);
          }
          FUN_140041b80(local_138,&local_1b8);
        }
        else {
          puVar12 = (ulonglong *)*puVar11;
          if (puVar12 != local_138) goto LAB_1400df9d5;
        }
        local_b8 = local_138;
        gml_Script_anon_845___InputTriggerEffectSystem___InputTriggerEffectSystem
                  (local_res8,local_res10,&local_1d8,1,&local_b8);
      }
      local_178 = 0x16;
      uVar5 = local_1bc & 0xffffff;
      if (uVar5 == 0) {
LAB_1400dfa80:
        local_1c8 = local_1c8 + 1.0;
      }
      else {
        if (uVar5 == 1) {
          local_1c8 = (double)FUN_140e4b060(&local_1c8);
          local_1bc = 0;
          goto LAB_1400dfa80;
        }
        if (uVar5 == 7) {
          local_1c8 = (double)CONCAT44(local_1c8._4_4_,local_1c8._0_4_ + 1);
        }
        else if (uVar5 == 10) {
          local_1c8 = (double)((longlong)local_1c8 + 1);
        }
        else {
          if (uVar5 == 0xd) {
            local_1bc = 0;
            goto LAB_1400dfa80;
          }
          FUN_140042910(&DAT_14172c3d8,&local_1c8,&local_1c8);
        }
      }
      if (iVar3 < 1) goto code_r0x0001400dfa93;
      puVar11 = local_168;
    } while( true );
  }
LAB_1400dfaa0:
  bVar14 = (byte)uVar15;
  local_178 = 0x19;
  puVar11 = local_168;
LAB_1400e00c0:
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << (bVar14 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_138,0x10,6,FUN_140041b30);
  if (0 < (int)local_170[0]) {
    puVar10 = puVar11;
    do {
      puVar1 = (undefined8 *)*puVar10;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar10 = puVar10 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  FUN_140e4cd60(puVar11);
  DAT_141dc7a50 = (undefined8 *)local_188;
  return param_3;
code_r0x0001400dfa93:
  param_3 = local_res18;
  uVar15 = local_res20;
  goto LAB_1400dfaa0;
}

