// gml_Script_InputDefineVerb @ 0x140319a10

undefined8 *
gml_Script_InputDefineVerb
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  byte bVar11;
  uint uVar12;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar13;
  uint local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  uint local_198 [3];
  uint uStack_18c;
  undefined8 local_188;
  char *local_180;
  undefined4 local_178;
  ulonglong local_168;
  uint uStack_160;
  undefined4 uStack_15c;
  undefined1 local_158 [16];
  uint local_148 [4];
  uint local_138 [4];
  uint local_128 [4];
  uint local_118 [4];
  uint local_108 [4];
  uint local_f8 [4];
  uint local_e8 [4];
  uint local_d8 [4];
  uint local_c8 [2];
  undefined8 *local_c0;
  undefined1 local_b8 [16];
  longlong local_a8;
  undefined1 *local_98;
  uint *local_90;
  uint *local_88;
  uint *local_80;
  uint *local_78;
  uint *local_70;
  uint *local_68;
  uint *local_60;
  uint *local_58;
  
  local_180 = "gml_Script_InputDefineCluster";
  local_188 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_188;
  local_178 = 0x19;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_c8,param_4,8,param_5);
  pcVar13 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_158,0x10,9,FUN_1400424d0,FUN_140041b30);
  uVar12 = 0xffffff;
  bVar11 = 0xff;
  uStack_18c = 0xffffff;
  local_198[0] = 0;
  local_198[1] = 0;
  local_19c = 0;
  local_1a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde13c) &&
     (_Init_thread_header(&DAT_141dde13c), DAT_141dde13c == -1)) {
    DAT_141dde140 = (longlong *)FUN_140e63aa0(DAT_1419f0b08);
    _Init_thread_footer(&DAT_141dde13c);
  }
  local_178 = 0x19;
  uVar10 = (ulonglong)local_c8[0];
  if ((int)local_c8[0] < 6) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_c0[5];
  }
  iVar2 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_178 = 0x19;
    if ((int)local_c8[0] < 6) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)local_c0[5];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0;
  }
  if ((int)local_c8[0] < 7) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_c0[6];
  }
  iVar2 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    uStack_15c = 0xd;
    local_168 = 0;
    if ((int)local_c8[0] < 7) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (ulonglong *)local_c0[6];
      if (&local_168 == puVar9) goto LAB_140319c0f;
    }
    local_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = uStack_160;
    uStack_1ac = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_1b8);
  }
LAB_140319c0f:
  if ((int)local_c8[0] < 8) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_c0[7];
  }
  iVar2 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  uVar3 = (undefined4)((ulonglong)pcVar13 >> 0x20);
  if (iVar2 == 0) {
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    if ((int)local_c8[0] < 8) {
      puVar5 = (uint *)&DAT_1419df7b0;
    }
    else {
      puVar5 = (uint *)local_c0[7];
    }
    pcVar13 = (code *)CONCAT44(uVar3,DAT_1419fd6d8);
    puVar4 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_1a8,0,pcVar13,0);
    if (puVar4 != puVar5) {
      local_1b8 = *puVar4;
      uStack_1b4 = puVar4[1];
      uStack_1b0 = puVar4[2];
      uStack_1ac = puVar4[3];
      if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_1b8);
    }
  }
  if (DAT_141ddc0cf == '\0') {
    FUN_140e64380(DAT_141dde140,"gml_Script_InputDefineCluster");
    FUN_140e64380(local_res8,"gml_Script_InputDefineCluster");
  }
  local_178 = 0x1b;
  if (DAT_141ddc0cf == '\0') {
    DAT_141ddc0cf = '\x01';
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    puVar5 = (uint *)(**(code **)(*DAT_141dde140 + 0x10))(DAT_141dde140,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde140);
    pcVar13 = (code *)0x0;
    puVar4 = (uint *)gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                               (local_res8,local_res10,&local_1a8,0,0);
    if (puVar4 != puVar5) {
      local_1b8 = *puVar4;
      uStack_1b4 = puVar4[1];
      uStack_1b0 = puVar4[2];
      uStack_1ac = puVar4[3];
      if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_1b8);
    }
    FUN_140e60910(1);
  }
  local_178 = 0x25;
  uVar6 = (**(code **)(*DAT_141dde140 + 8))(DAT_141dde140,DAT_1419fcb48);
  iVar2 = FUN_140e63cb0(local_b8,&local_res8,&local_res10,uVar6);
  if (0 < iVar2) {
    do {
      uVar3 = (undefined4)((ulonglong)pcVar13 >> 0x20);
      local_178 = 0x27;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 5;
      local_1b8 = DAT_1419fd0f8 & 0xffffff;
      uStack_1b4 = (int)(DAT_1419fd0f8 | 0x5000000) >> 0x18 & 0xff;
      if (uStack_1b4 == 0xf) {
        uStack_1b4 = 0x4000004;
      }
      else {
        uStack_1b4 = uStack_1b4 | 0x1000000;
      }
      uStack_15c = 0xf;
      local_168 = CONCAT44(uStack_1b4,DAT_1419fd0f8) & 0xffffffff00ffffff;
      uStack_1b0 = uStack_160;
      uStack_1ac = 0xf;
      if ((1 << (local_158[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_158);
      }
      FUN_140041b80(local_158,&local_1b8);
      local_98 = local_158;
      if ((int)local_c8[0] < 1) {
        puVar5 = (uint *)&DAT_1419df7b0;
LAB_140319ed2:
        local_1b8 = *puVar5;
        uStack_1b4 = puVar5[1];
        uStack_1b0 = puVar5[2];
        uStack_1ac = puVar5[3];
        if ((1 << ((byte)local_148[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_148);
        }
        FUN_140041b80(local_148,&local_1b8);
      }
      else {
        puVar5 = (uint *)*local_c0;
        if (puVar5 != local_148) goto LAB_140319ed2;
      }
      local_90 = local_148;
      if ((int)local_c8[0] < 2) {
        puVar5 = (uint *)&DAT_1419df7b0;
LAB_140319f21:
        local_1b8 = *puVar5;
        uStack_1b4 = puVar5[1];
        uStack_1b0 = puVar5[2];
        uStack_1ac = puVar5[3];
        if ((1 << ((byte)local_138[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_138);
        }
        FUN_140041b80(local_138,&local_1b8);
      }
      else {
        puVar5 = (uint *)local_c0[1];
        if (puVar5 != local_138) goto LAB_140319f21;
      }
      local_88 = local_138;
      if ((int)local_c8[0] < 3) {
        puVar5 = (uint *)&DAT_1419df7b0;
LAB_140319f70:
        local_1b8 = *puVar5;
        uStack_1b4 = puVar5[1];
        uStack_1b0 = puVar5[2];
        uStack_1ac = puVar5[3];
        if ((1 << ((byte)local_128[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_128);
        }
        FUN_140041b80(local_128,&local_1b8);
      }
      else {
        puVar5 = (uint *)local_c0[2];
        if (puVar5 != local_128) goto LAB_140319f70;
      }
      local_80 = local_128;
      if ((int)local_c8[0] < 4) {
        puVar5 = (uint *)&DAT_1419df7b0;
LAB_140319fbf:
        local_1b8 = *puVar5;
        uStack_1b4 = puVar5[1];
        uStack_1b0 = puVar5[2];
        uStack_1ac = puVar5[3];
        if ((1 << ((byte)local_118[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_118);
        }
        FUN_140041b80(local_118,&local_1b8);
      }
      else {
        puVar5 = (uint *)local_c0[3];
        if (puVar5 != local_118) goto LAB_140319fbf;
      }
      local_78 = local_118;
      if ((int)local_c8[0] < 5) {
        puVar5 = (uint *)&DAT_1419df7b0;
LAB_14031a00e:
        local_1b8 = *puVar5;
        uStack_1b4 = puVar5[1];
        uStack_1b0 = puVar5[2];
        uStack_1ac = puVar5[3];
        if ((1 << ((byte)local_108[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_108);
        }
        FUN_140041b80(local_108,&local_1b8);
      }
      else {
        puVar5 = (uint *)local_c0[4];
        if (puVar5 != local_108) goto LAB_14031a00e;
      }
      local_70 = local_108;
      if ((int)local_c8[0] < 6) {
        puVar5 = (uint *)&DAT_1419df7b0;
LAB_14031a05d:
        local_1b8 = *puVar5;
        uStack_1b4 = puVar5[1];
        uStack_1b0 = puVar5[2];
        uStack_1ac = puVar5[3];
        if ((1 << ((byte)local_f8[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_1b8);
      }
      else {
        puVar5 = (uint *)local_c0[5];
        if (puVar5 != local_f8) goto LAB_14031a05d;
      }
      local_68 = local_f8;
      if ((int)local_c8[0] < 7) {
        puVar5 = (uint *)&DAT_1419df7b0;
LAB_14031a0af:
        local_1b8 = *puVar5;
        uStack_1b4 = puVar5[1];
        uStack_1b0 = puVar5[2];
        uStack_1ac = puVar5[3];
        if ((1 << ((byte)local_e8[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_1b8);
      }
      else {
        puVar5 = (uint *)local_c0[6];
        if (puVar5 != local_e8) goto LAB_14031a0af;
      }
      local_60 = local_e8;
      if ((int)local_c8[0] < 8) {
        puVar5 = (uint *)&DAT_1419df7b0;
LAB_14031a101:
        local_1b8 = *puVar5;
        uStack_1b4 = puVar5[1];
        uStack_1b0 = puVar5[2];
        uStack_1ac = puVar5[3];
        if ((1 << ((byte)local_d8[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d8);
        }
        FUN_140041b80(local_d8,&local_1b8);
      }
      else {
        puVar5 = (uint *)local_c0[7];
        if (puVar5 != local_d8) goto LAB_14031a101;
      }
      local_58 = local_d8;
      pcVar13 = (code *)CONCAT44(uVar3,DAT_1419fd6d8);
      puVar5 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_1a8,9,pcVar13,&local_98);
      if (puVar5 != local_198) {
        local_1b8 = *puVar5;
        uStack_1b4 = puVar5[1];
        uStack_1b0 = puVar5[2];
        uStack_1ac = puVar5[3];
        if ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_198);
        }
        FUN_140041b80(local_198,&local_1b8);
        uVar12 = uStack_18c;
      }
      bVar11 = (byte)uVar12;
      local_178 = 0x28;
      puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd578);
      FUN_140e609c0(local_res8);
      if ((int)local_c8[0] < 1) {
        puVar8 = &DAT_1419df7b0;
      }
      else {
        puVar8 = (undefined8 *)*local_c0;
      }
      uVar3 = FUN_140e4a740(puVar8);
      puVar5 = (uint *)FUN_140e48e40(puVar7,uVar3);
      FUN_140e609c0(*(undefined8 *)*puVar7);
      if (local_198 != puVar5) {
        local_1b8 = local_198[0];
        uStack_1b4 = local_198[1];
        uStack_1b0 = local_198[2];
        uStack_1ac = uStack_18c;
        if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_1b8);
      }
      FUN_140e60910(2);
      cVar1 = FUN_140e643f0(local_b8,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_b8,&local_res8,&local_res10);
  if (local_a8 != 0) {
    FUN_140e4cd60();
    local_a8 = 0;
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << (bVar11 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  _eh_vector_destructor_iterator_(local_158,0x10,9,FUN_140041b30);
  if (0 < (int)local_c8[0]) {
    puVar7 = local_c0;
    do {
      puVar8 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      *puVar8 = 0;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FUN_140e4cd60(local_c0);
  DAT_141dc7a50 = (undefined8 *)local_188;
  return param_3;
}

