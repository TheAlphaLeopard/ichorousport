// gml_Script_InputDeviceCheckViaPlayer @ 0x14031a470

undefined8 *
gml_Script_InputDeviceCheckViaPlayer
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar11;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  uint local_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  uint local_168 [3];
  uint uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  uint local_128 [4];
  uint local_118 [4];
  uint local_108 [4];
  uint local_f8 [4];
  uint local_e8 [4];
  uint local_d8 [4];
  ulonglong local_c8;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  uint *local_a8;
  uint *local_a0;
  uint *local_98;
  uint *local_90;
  uint *local_88;
  uint *local_80;
  uint local_78 [2];
  undefined8 *local_70;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_140 = "gml_Script_InputDefineVerb";
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  local_138 = 0x18;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_78,param_4,5,param_5);
  pcVar11 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_128,0x10,6,FUN_1400424d0,FUN_140041b30);
  uStack_15c = 0xffffff;
  local_168[0] = 0;
  local_168[1] = 0;
  local_17c = 0;
  local_188 = 0;
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde150) &&
     (_Init_thread_header(&DAT_141dde150), DAT_141dde150 == -1)) {
    DAT_141dde148 = (longlong *)FUN_140e63aa0(DAT_1419f0b28);
    _Init_thread_footer(&DAT_141dde150);
  }
  local_138 = 0x18;
  uVar10 = (ulonglong)local_78[0];
  if ((int)local_78[0] < 5) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_70[4];
  }
  iVar2 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
  uVar3 = (undefined4)((ulonglong)pcVar11 >> 0x20);
  if (iVar2 == 0) {
    local_138 = 0x18;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    if ((int)local_78[0] < 5) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (ulonglong *)local_70[4];
    }
    pcVar11 = (code *)CONCAT44(uVar3,DAT_1419fd6d8);
    puVar4 = (ulonglong *)FUN_140e634e0(local_res8,local_res10,&local_188,0,pcVar11,0);
    if (puVar4 != puVar5) {
      local_c8 = *puVar4;
      uStack_c0 = (uint)puVar4[1];
      uStack_bc = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_c8);
    }
  }
  if (DAT_141ddc0d0 == '\0') {
    FUN_140e64380(DAT_141dde148,"gml_Script_InputDefineVerb");
    FUN_140e64380(local_res8,"gml_Script_InputDefineVerb");
  }
  local_138 = 0x1a;
  if (DAT_141ddc0d0 == '\0') {
    DAT_141ddc0d0 = '\x01';
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    puVar5 = (ulonglong *)(**(code **)(*DAT_141dde148 + 0x10))(DAT_141dde148,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde148);
    pcVar11 = (code *)0x0;
    puVar4 = (ulonglong *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (local_res8,local_res10,&local_188,0,0);
    if (puVar4 != puVar5) {
      local_c8 = *puVar4;
      uStack_c0 = (uint)puVar4[1];
      uStack_bc = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_c8);
    }
    FUN_140e60910(1);
  }
  local_138 = 0x24;
  uVar6 = (**(code **)(*DAT_141dde148 + 8))(DAT_141dde148,DAT_1419fcb48);
  iVar2 = FUN_140e63cb0(local_68,&local_res8,&local_res10,uVar6);
  if (0 < iVar2) {
    do {
      uVar3 = (undefined4)((ulonglong)pcVar11 >> 0x20);
      local_138 = 0x26;
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_188 = 0;
      local_180 = 0;
      local_17c = 5;
      local_178 = DAT_1419fdc88 & 0xffffff;
      uStack_174 = (int)(DAT_1419fdc88 | 0x5000000) >> 0x18 & 0xff;
      if (uStack_174 == 0xf) {
        uStack_174 = 0x4000004;
      }
      else {
        uStack_174 = uStack_174 | 0x1000000;
      }
      uStack_bc = 0xf;
      local_c8 = CONCAT44(uStack_174,DAT_1419fdc88) & 0xffffffff00ffffff;
      uStack_170 = uStack_c0;
      uStack_16c = 0xf;
      if ((1 << ((byte)local_128[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_178);
      local_a8 = local_128;
      if ((int)local_78[0] < 1) {
        puVar7 = (uint *)&DAT_1419df7b0;
LAB_14031a862:
        local_178 = *puVar7;
        uStack_174 = puVar7[1];
        uStack_170 = puVar7[2];
        uStack_16c = puVar7[3];
        if ((1 << ((byte)local_118[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_118);
        }
        FUN_140041b80(local_118,&local_178);
      }
      else {
        puVar7 = (uint *)*local_70;
        if (puVar7 != local_118) goto LAB_14031a862;
      }
      local_a0 = local_118;
      if ((int)local_78[0] < 2) {
        puVar7 = (uint *)&DAT_1419df7b0;
LAB_14031a8b1:
        local_178 = *puVar7;
        uStack_174 = puVar7[1];
        uStack_170 = puVar7[2];
        uStack_16c = puVar7[3];
        if ((1 << ((byte)local_108[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_108);
        }
        FUN_140041b80(local_108,&local_178);
      }
      else {
        puVar7 = (uint *)local_70[1];
        if (puVar7 != local_108) goto LAB_14031a8b1;
      }
      local_98 = local_108;
      if ((int)local_78[0] < 3) {
        puVar7 = (uint *)&DAT_1419df7b0;
LAB_14031a900:
        local_178 = *puVar7;
        uStack_174 = puVar7[1];
        uStack_170 = puVar7[2];
        uStack_16c = puVar7[3];
        if ((1 << ((byte)local_f8[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_178);
      }
      else {
        puVar7 = (uint *)local_70[2];
        if (puVar7 != local_f8) goto LAB_14031a900;
      }
      local_90 = local_f8;
      if ((int)local_78[0] < 4) {
        puVar7 = (uint *)&DAT_1419df7b0;
LAB_14031a94f:
        local_178 = *puVar7;
        uStack_174 = puVar7[1];
        uStack_170 = puVar7[2];
        uStack_16c = puVar7[3];
        if ((1 << ((byte)local_e8[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_178);
      }
      else {
        puVar7 = (uint *)local_70[3];
        if (puVar7 != local_e8) goto LAB_14031a94f;
      }
      local_88 = local_e8;
      if ((int)local_78[0] < 5) {
        puVar7 = (uint *)&DAT_1419df7b0;
LAB_14031a99e:
        local_178 = *puVar7;
        uStack_174 = puVar7[1];
        uStack_170 = puVar7[2];
        uStack_16c = puVar7[3];
        if ((1 << ((byte)local_d8[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d8);
        }
        FUN_140041b80(local_d8,&local_178);
      }
      else {
        puVar7 = (uint *)local_70[4];
        if (puVar7 != local_d8) goto LAB_14031a99e;
      }
      local_80 = local_d8;
      puVar7 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_188,6,
                                     CONCAT44(uVar3,DAT_1419fd6d8),&local_a8);
      if (puVar7 != local_168) {
        local_178 = *puVar7;
        uStack_174 = puVar7[1];
        uStack_170 = puVar7[2];
        uStack_16c = puVar7[3];
        if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_168);
        }
        FUN_140041b80(local_168,&local_178);
      }
      local_138 = 0x28;
      puVar8 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd668);
      FUN_140e609c0(local_res8);
      if ((int)local_78[0] < 1) {
        puVar9 = &DAT_1419df7b0;
      }
      else {
        puVar9 = (undefined8 *)*local_70;
      }
      uVar3 = FUN_140e4a740(puVar9);
      puVar7 = (uint *)FUN_140e48e40(puVar8,uVar3);
      FUN_140e609c0(*(undefined8 *)*puVar8);
      if (local_168 != puVar7) {
        local_178 = local_168[0];
        uStack_174 = local_168[1];
        uStack_170 = local_168[2];
        uStack_16c = uStack_15c;
        if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        FUN_140041b80(puVar7,&local_178);
      }
      FUN_140e60910(2);
      local_138 = 0x29;
      uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a02f58);
      if ((int)local_78[0] < 2) {
        puVar8 = &DAT_1419df7b0;
      }
      else {
        puVar8 = (undefined8 *)local_70[1];
      }
      puVar7 = local_168;
      FUN_140e98ef0(local_res8,local_res10,uVar6,puVar8,puVar7);
      uVar3 = (undefined4)((ulonglong)puVar7 >> 0x20);
      local_138 = 0x2b;
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_188 = 0;
      local_180 = 0;
      local_17c = 5;
      puVar7 = (uint *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a02e78);
      if (puVar7 != local_128) {
        local_178 = *puVar7;
        uStack_174 = puVar7[1];
        uStack_170 = puVar7[2];
        uStack_16c = puVar7[3];
        if ((1 << ((byte)local_128[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_128);
        }
        FUN_140041b80(local_128,&local_178);
      }
      local_a8 = local_128;
      if ((int)local_78[0] < 1) {
        puVar7 = (uint *)&DAT_1419df7b0;
LAB_14031abc2:
        local_178 = *puVar7;
        uStack_174 = puVar7[1];
        uStack_170 = puVar7[2];
        uStack_16c = puVar7[3];
        if ((1 << ((byte)local_118[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_118);
        }
        FUN_140041b80(local_118,&local_178);
      }
      else {
        puVar7 = (uint *)*local_70;
        if (puVar7 != local_118) goto LAB_14031abc2;
      }
      local_a0 = local_118;
      pcVar11 = (code *)CONCAT44(uVar3,DAT_1419fee38);
      uVar6 = FUN_140e634e0(local_res8,local_res10,&local_188,2,pcVar11,&local_a8);
      local_ac = 0;
      local_b8 = 0;
      iVar2 = FUN_140e851f0(uVar6,&local_b8,DAT_141955260,1);
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      uVar3 = (undefined4)((ulonglong)pcVar11 >> 0x20);
      if (iVar2 != -2 && iVar2 < 0) {
        local_138 = 0x2d;
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_158 = 0;
        local_150 = 0;
        local_14c = 5;
        puVar7 = (uint *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a02e78);
        if (puVar7 != local_108) {
          local_178 = *puVar7;
          uStack_174 = puVar7[1];
          uStack_170 = puVar7[2];
          uStack_16c = puVar7[3];
          if ((1 << ((byte)local_108[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_108);
          }
          FUN_140041b80(local_108,&local_178);
        }
        local_98 = local_108;
        if ((int)local_78[0] < 1) {
          puVar7 = (uint *)&DAT_1419df7b0;
LAB_14031ad1a:
          local_178 = *puVar7;
          uStack_174 = puVar7[1];
          uStack_170 = puVar7[2];
          uStack_16c = puVar7[3];
          if ((1 << ((byte)local_f8[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_f8);
          }
          FUN_140041b80(local_f8,&local_178);
        }
        else {
          puVar7 = (uint *)*local_70;
          if (puVar7 != local_f8) goto LAB_14031ad1a;
        }
        local_90 = local_f8;
        pcVar11 = (code *)CONCAT44(uVar3,DAT_1419fe568);
        FUN_140e634e0(local_res8,local_res10,&local_158,2,pcVar11,&local_98);
      }
      cVar1 = FUN_140e643f0(local_68,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_68,&local_res8,&local_res10);
  if (local_58 != 0) {
    FUN_140e4cd60();
    local_58 = 0;
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  _eh_vector_destructor_iterator_(local_128,0x10,6,FUN_140041b30);
  if (0 < (int)local_78[0]) {
    puVar8 = local_70;
    do {
      puVar9 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      *puVar9 = 0;
      *(undefined4 *)(puVar9 + 1) = 0;
      *(undefined4 *)((longlong)puVar9 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FUN_140e4cd60(local_70);
  DAT_141dc7a50 = (undefined8 *)local_148;
  return param_3;
}

