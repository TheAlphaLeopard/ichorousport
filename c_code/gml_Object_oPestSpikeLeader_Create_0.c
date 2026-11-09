// gml_Object_oPestSpikeLeader_Create_0 @ 0x140bdf630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oPestSpikeLeader_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong *plVar6;
  undefined4 uVar7;
  code *pcVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  ulonglong in_stack_fffffffffffffe50;
  longlong *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
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
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  
  local_170 = "gml_Object_oPestSpike_Alarm_1";
  local_168 = 0;
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_88,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar7 = 0xffffff;
  local_144 = 0xffffff;
  local_150 = 0;
  uStack_8c = 0xffffff;
  local_98 = (longlong *)0x0;
  uStack_9c = 0xffffff;
  local_a8 = (longlong *)0x0;
  local_154 = 0xffffff;
  local_160 = 0;
  uStack_10c = 0xffffff;
  local_118 = (longlong *)0x0;
  local_ec = 0xffffff;
  local_f8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_168 = 3;
  local_fc = 0;
  local_108 = 0x4010000000000000;
  FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_108);
  local_168 = 4;
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  local_144 = 0;
  local_150 = 0x4000000000000000;
  FUN_140e86fa0(param_1,DAT_141a0f938,0x80000000,&local_150);
  local_168 = 6;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  uStack_19c = 6;
  in_stack_fffffffffffffe50 = in_stack_fffffffffffffe50 & 0xffffffffffffff00;
  uVar9 = (ulonglong)pcVar8 & 0xffffffffffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_1419fe0e8,0x80000000,&local_98,uVar9,in_stack_fffffffffffffe50);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_19c = 6;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_1419fe158,0x80000000,&local_a8,uVar9,
                in_stack_fffffffffffffe50 & 0xffffffffffffff00);
  uVar10 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = local_98;
  uStack_1a0 = uStack_90;
  uStack_19c = uStack_8c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_1a8);
  local_58 = &local_88;
  local_1a8 = local_a8;
  uStack_1a0 = uStack_a0;
  uStack_19c = uStack_9c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_1a8);
  local_50 = local_78;
  uStack_19c = 0xf;
  local_1a8 = (longlong *)0x100000000000149;
  local_188 = 0x149;
  uStack_184 = 0x1000000;
  uStack_180 = uStack_1a0;
  uStack_17c = 0xf;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_188);
  local_48 = local_68;
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_198,3,CONCAT44(uVar10,DAT_141a124c8),&local_58);
  if (puVar3 != &local_160) {
    local_188 = *(undefined4 *)puVar3;
    uStack_184 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_180 = *(undefined4 *)(puVar3 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_160);
    }
    FUN_140041b80(&local_160,&local_188);
  }
  local_168 = 8;
  cVar1 = FUN_140e491e0(&local_160);
  if (cVar1 != '\0') {
    local_168 = 10;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a02dc8);
    local_58 = &local_160;
    puVar3 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_198,1,uVar4,&local_58);
    plVar6 = (longlong *)0x0;
    if (puVar3 != &local_118) {
      local_188 = *(undefined4 *)puVar3;
      uStack_184 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_180 = *(undefined4 *)(puVar3 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar3 + 0xc);
      FUN_140041b80(&local_118,&local_188);
      plVar6 = local_118;
      uVar7 = uStack_10c;
    }
    local_168 = 0xb;
    local_188 = (undefined4)local_118;
    uStack_184 = local_118._4_4_;
    uStack_180 = uStack_110;
    uStack_17c = uStack_10c;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_188);
    FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_f8);
    local_168 = 0xd;
    uStack_1a0 = uStack_110;
    uStack_19c = uVar7;
    if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) == 0) {
      local_1a8 = plVar6;
    }
    else {
      FUN_1400419b0(&local_1a8,&local_118);
    }
    if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de2b78) &&
       (_Init_thread_header(&DAT_141de2b78), DAT_141de2b78 == -1)) {
      _DAT_141de2b8c = 0;
      _DAT_141de2b80 = 0;
      _DAT_141de2ba0 = 0;
      _DAT_141de2b94 = 0x4056800000000000;
      _DAT_141de2ba4 = 1;
      _DAT_141de2bb4 = 0;
      _DAT_141de2ba8 = 0x4066800000000000;
      _DAT_141de2bb8 = 2;
      _DAT_141de2bc8 = 0;
      _DAT_141de2bbc = 0x4070e00000000000;
      _DAT_141de2bcc = 3;
      atexit((_func_5014 *)&LAB_141495630);
      _Init_thread_footer(&DAT_141de2b78);
    }
    uVar5 = 0;
    do {
      iVar2 = FUN_140e851f0(&DAT_141de2b80 + (longlong)(int)uVar5 * 0x14,&local_1a8,DAT_141955260,0)
      ;
      if (iVar2 == 0) {
        iVar2 = *(int *)(&DAT_141de2b90 + (longlong)(int)uVar5 * 0x14);
        if (iVar2 == 0) {
          local_168 = 0x11;
          FUN_140e87170(&local_160,DAT_141a0a808,0x80000000,&local_b8,param_1,param_2);
          local_188 = (undefined4)local_b8;
          uStack_184 = local_b8._4_4_;
          uStack_180 = uStack_b0;
          uStack_17c = uStack_ac;
          if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_130);
          }
          FUN_140041b80(&local_130,&local_188);
          FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_130);
          local_168 = 0x13;
        }
        else if (iVar2 == 1) {
          local_168 = 0x17;
          FUN_140e87170(&local_160,DAT_141a101f8,0x80000000,&local_c8,param_1,param_2);
          local_188 = (undefined4)local_c8;
          uStack_184 = local_c8._4_4_;
          uStack_180 = uStack_c0;
          uStack_17c = uStack_bc;
          if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_140);
          }
          FUN_140041b80(&local_140,&local_188);
          FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_140);
          local_168 = 0x19;
        }
        else if (iVar2 == 2) {
          local_168 = 0x1d;
          FUN_140e87170(&local_160,DAT_141a0a798,0x80000000,&local_d8,param_1,param_2);
          local_188 = (undefined4)local_d8;
          uStack_184 = local_d8._4_4_;
          uStack_180 = uStack_d0;
          uStack_17c = uStack_cc;
          if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_130);
          }
          FUN_140041b80(&local_130,&local_188);
          FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_130);
          local_168 = 0x1f;
        }
        else if (iVar2 == 3) {
          local_168 = 0x23;
          FUN_140e87170(&local_160,DAT_141a0a788,0x80000000,&local_e8,param_1,param_2);
          local_188 = (undefined4)local_e8;
          uStack_184 = local_e8._4_4_;
          uStack_180 = uStack_e0;
          uStack_17c = uStack_dc;
          if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_140);
          }
          FUN_140041b80(&local_140,&local_188);
          FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_140);
          local_168 = 0x27;
        }
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 4);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
  }
  local_168 = 0x2e;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 0;
  local_108 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_108);
  local_168 = 0x2f;
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  local_144 = 0;
  local_150 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0f938,0x80000000,&local_150);
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(&local_88,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_178;
  return;
}

