// gml_Object_oButtonSet_Create_0 @ 0x140869e80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oButtonSet_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined4 uVar12;
  undefined8 uVar11;
  ulonglong uVar13;
  undefined8 **ppuVar14;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  longlong *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  char *local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined1 *local_110;
  undefined8 *local_108;
  undefined1 *local_100;
  undefined8 local_f8 [2];
  undefined8 local_e8 [2];
  undefined8 local_d8 [2];
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_180 = "gml_Object_oBurstRing_Step_0";
  local_178 = 0;
  local_188 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_188;
  uVar12 = 1;
  _eh_vector_constructor_iterator_(local_f8,0x10,8,FUN_1400424d0,FUN_140041b30);
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_154 = 0xffffff;
  local_160 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_178 = 2;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0b9a8);
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5b88);
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5ae8);
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0b9a8);
  if (puVar5 != local_f8) {
    local_1b8 = (longlong *)*puVar5;
    uStack_1b0 = *(undefined4 *)(puVar5 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_1b8);
  }
  local_138 = local_f8;
  if (puVar6 != local_e8) {
    local_1b8 = (longlong *)*puVar6;
    uStack_1b0 = *(undefined4 *)(puVar6 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_1b8);
  }
  local_130 = local_e8;
  uStack_19c = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_1a0 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
    local_1a8 = (longlong *)*puVar7;
  }
  else {
    FUN_1400419b0(&local_1a8,puVar7);
  }
  FUN_140042560(&local_1a8,uVar4);
  local_1b8 = local_1a8;
  uStack_1b0 = uStack_1a0;
  uStack_1ac = uStack_19c;
  if ((1 << ((byte)local_d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_1b8);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_128 = local_d8;
  FUN_140e609c0(param_1);
  uVar4 = CONCAT44(uVar12,DAT_141a00c58);
  puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1c8,3,uVar4,&local_138);
  uVar12 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar7 != puVar8) {
    local_1b8 = (longlong *)*puVar7;
    uStack_1b0 = *(undefined4 *)(puVar7 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_1b8);
  }
  FUN_140e60910(1);
  local_178 = 4;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  uVar13 = 0;
  uVar10 = CONCAT44(uVar12,DAT_1419ef5d8);
  puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1c8,0,uVar10,0);
  if (puVar7 != &local_160) {
    local_1b8 = (longlong *)*puVar7;
    uStack_1b0 = *(undefined4 *)(puVar7 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_160);
    }
    FUN_140041b80(&local_160,&local_1b8);
  }
  local_178 = 5;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  uStack_19c = 6;
  uVar13 = uVar13 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_1419fe0e8,0x80000000,&local_58,uVar10,uVar13);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_19c = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_1419fe158,0x80000000,&local_68,uVar10,uVar13 & 0xffffffffffffff00);
  uVar12 = (undefined4)(uVar10 >> 0x20);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1b8 = (longlong *)local_58;
  uStack_1b0 = uStack_50;
  uStack_1ac = uStack_4c;
  if ((1 << ((byte)local_f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_1b8);
  local_1b8 = (longlong *)local_68;
  uStack_1b0 = uStack_60;
  uStack_1ac = uStack_5c;
  local_138 = local_f8;
  if ((1 << ((byte)local_e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_1b8);
  local_130 = local_e8;
  if (puVar5 != local_d8) {
    local_1b8 = (longlong *)*puVar5;
    uStack_1b0 = *(undefined4 *)(puVar5 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_1b8);
  }
  local_128 = local_d8;
  uStack_1ac = 0xf;
  local_1b8 = (longlong *)0x10000000000009d;
  local_1a8 = (longlong *)0x10000000000009d;
  uStack_1a0 = uStack_1b0;
  uStack_19c = 0xf;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_1a8);
  local_120 = local_c8;
  local_1b8 = (longlong *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_1b0 = uRam00000001419df7a8;
  uStack_1ac = uRam00000001419df7ac;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_1b8);
  local_118 = local_b8;
  local_1b8 = (longlong *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_1b0 = uRam00000001419df7c8;
  uStack_1ac = uRam00000001419df7cc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_1b8);
  local_110 = local_a8;
  local_108 = &local_160;
  local_1b8 = (longlong *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_1b0 = uRam00000001419df7a8;
  uStack_1ac = uRam00000001419df7ac;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_1b8);
  local_100 = local_88;
  uVar10 = CONCAT44(uVar12,DAT_1419f5fe8);
  FUN_140e634e0(param_1,param_2,&local_1c8,8,uVar10,&local_138);
  local_178 = 6;
  while( true ) {
    uVar12 = (undefined4)(uVar10 >> 0x20);
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0b9a8);
    local_138 = &local_160;
    uVar11 = CONCAT44(uVar12,DAT_1419f58d8);
    uVar9 = FUN_140e634e0(param_1,param_2,&local_1c8,1,uVar11,&local_138);
    uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
    cVar1 = FUN_140e491e0(uVar9);
    if (cVar1 != '\0') break;
    local_178 = 8;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    local_130 = &local_160;
    local_150 = _DAT_141dc6b10;
    uStack_14c = uRam0000000141dc6b14;
    uStack_148 = uRam0000000141dc6b18;
    uStack_144 = uRam0000000141dc6b1c;
    if ((1 << ((byte)local_d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_150);
    local_128 = local_d8;
    uVar4 = CONCAT44(uVar12,DAT_1419f5a78);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_198,2,uVar4,&local_130);
    uVar12 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (puVar5 != &local_170) {
      local_150 = *(undefined4 *)puVar5;
      uStack_14c = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_148 = *(undefined4 *)(puVar5 + 1);
      uStack_144 = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_170);
      }
      FUN_140041b80(&local_170,&local_150);
    }
    local_178 = 9;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    local_138 = &local_160;
    local_150 = _DAT_141dc6b10;
    uStack_14c = uRam0000000141dc6b14;
    uStack_148 = uRam0000000141dc6b18;
    uStack_144 = uRam0000000141dc6b1c;
    if ((1 << ((byte)local_e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_150);
    local_130 = local_e8;
    uVar4 = CONCAT44(uVar12,DAT_1419f5938);
    FUN_140e634e0(param_1,param_2,&local_1c8,2,uVar4,&local_138);
    uVar12 = (undefined4)((ulonglong)uVar4 >> 0x20);
    local_178 = 10;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    local_138 = &local_170;
    ppuVar14 = &local_138;
    uVar10 = CONCAT44(uVar12,DAT_141a02ef8);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_1c8,1,uVar10,ppuVar14);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 == '\0') {
      local_178 = 10;
    }
    else {
      local_178 = 0xb;
      uVar10 = uVar10 & 0xffffffffffffff00;
      FUN_140e87440(&local_170,DAT_141a56cd0,0x80000000,&local_78,uVar10,
                    (ulonglong)ppuVar14 & 0xffffffffffffff00);
      uStack_19c = 10;
      local_1a8 = (longlong *)0x2;
      iVar2 = FUN_140e851f0(&local_78,&local_1a8,DAT_141955260,0);
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      uVar12 = (undefined4)(uVar10 >> 0x20);
      if (iVar2 == 0) {
        local_178 = 0xb;
      }
      else {
        local_178 = 0xc;
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        local_1c8 = 0;
        local_1c0 = 0;
        local_1bc = 5;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe9b8);
        if (puVar5 != local_f8) {
          local_150 = *(undefined4 *)puVar5;
          uStack_14c = *(undefined4 *)((longlong)puVar5 + 4);
          uStack_148 = *(undefined4 *)(puVar5 + 1);
          uStack_144 = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)local_f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_f8);
          }
          FUN_140041b80(local_f8,&local_150);
        }
        local_130 = &local_170;
        uVar10 = CONCAT44(uVar12,DAT_141a573f0);
        local_138 = local_f8;
        uVar4 = FUN_140e634e0(param_1,param_2,&local_1c8,2,uVar10,&local_138);
        uStack_1ac = 0;
        local_1b8 = (longlong *)&DAT_bff0000000000000;
        iVar2 = FUN_140e851f0(uVar4,&local_1b8,DAT_141955260,0);
        if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        uVar12 = (undefined4)(uVar10 >> 0x20);
        if (iVar2 == 0) {
          local_178 = 0xe;
          if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          local_1c8 = 0;
          local_1c0 = 0;
          local_1bc = 5;
          if (puVar5 != local_f8) {
            local_150 = *(undefined4 *)puVar5;
            uStack_14c = *(undefined4 *)((longlong)puVar5 + 4);
            uStack_148 = *(undefined4 *)(puVar5 + 1);
            uStack_144 = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << ((byte)local_f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_f8);
            }
            FUN_140041b80(local_f8,&local_150);
          }
          local_130 = &local_170;
          uVar4 = CONCAT44(uVar12,DAT_141a57350);
          local_138 = local_f8;
          FUN_140e634e0(param_1,param_2,&local_1c8,2,uVar4,&local_138);
          uVar12 = (undefined4)((ulonglong)uVar4 >> 0x20);
          local_178 = 0xf;
          if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          local_1c8 = 0;
          local_1c0 = 0;
          local_1bc = 5;
          puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0b968);
          if (puVar5 != local_f8) {
            local_150 = *(undefined4 *)puVar5;
            uStack_14c = *(undefined4 *)((longlong)puVar5 + 4);
            uStack_148 = *(undefined4 *)(puVar5 + 1);
            uStack_144 = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << ((byte)local_f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_f8);
            }
            FUN_140041b80(local_f8,&local_150);
          }
          uVar10 = CONCAT44(uVar12,DAT_1419fdc08);
          local_138 = local_f8;
          uVar4 = FUN_140e634e0(param_1,param_2,&local_1c8,1,uVar10,&local_138);
          cVar1 = FUN_140e491e0(uVar4);
          if (cVar1 == '\0') {
            local_178 = 0xf;
            if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_198);
            }
            local_198 = 0;
            local_190 = 0;
            local_18c = 5;
            (**(code **)(*param_1 + 8))(param_1,DAT_1419fe9b8);
            uVar10 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0b968);
            local_130 = &local_170;
            FUN_140e63610(param_1,param_2,&local_198,1,uVar10,&local_130);
          }
        }
        else {
          local_178 = 0xc;
        }
      }
    }
  }
  local_178 = 0x11;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  local_138 = &local_160;
  FUN_140e634e0(param_1,param_2,&local_1c8,1,CONCAT44(uVar12,DAT_1419f6038),&local_138);
  local_178 = 0x13;
  uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
  uStack_1a0 = *(undefined4 *)(puVar6 + 1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
    local_1a8 = (longlong *)*puVar6;
  }
  else {
    FUN_1400419b0(&local_1a8);
  }
  uStack_1ac = 7;
  local_1b8 = (longlong *)CONCAT44(local_1b8._4_4_,1);
  FUN_1400462a0(&local_1a8,&local_1b8);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  uVar3 = FUN_140e851f0(uVar4,&local_1a8,DAT_141955260,1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if (uVar3 < 0x80000000) {
    local_178 = 0x14;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a0b9a8);
    (**(code **)(*param_1 + 8))(param_1,DAT_1419f5b88);
    FUN_140edd0e0(param_1,param_2,0,0);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_188;
  return;
}

