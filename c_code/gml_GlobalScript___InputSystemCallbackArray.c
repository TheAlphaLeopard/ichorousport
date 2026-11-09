// gml_GlobalScript___InputSystemCallbackArray @ 0x1400d1820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript___InputSystemCallbackArray
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar7;
  undefined1 **ppuVar6;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_110 = "gml_Script_anon@9727@__InputSystem@__InputSystem";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0xe4;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_f8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_3c = 0xffffff;
  local_48 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_13c = 0;
  local_148 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc844) &&
     (_Init_thread_header(&DAT_141ddc844), DAT_141ddc844 == -1)) {
    DAT_141ddc848 = (longlong *)FUN_140e63aa0(DAT_141a02e38);
    _Init_thread_footer(&DAT_141ddc844);
  }
  if (DAT_141ddc05b == '\0') {
    FUN_140e64380(DAT_141ddc848,"gml_Script_anon@9727@__InputSystem@__InputSystem");
    FUN_140e64380(param_1,"gml_Script_anon@9727@__InputSystem@__InputSystem");
  }
  local_108 = 0x100;
  if (DAT_141ddc05b == '\0') {
    DAT_141ddc05b = '\x01';
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc848 + 0x10))(DAT_141ddc848,DAT_141a02e48);
    uStack_14c = 0xd;
    local_158 = 0;
    if (&local_158 != puVar3) {
      local_138 = 0;
      uStack_134 = 0;
      uStack_130 = uStack_150;
      uStack_12c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_138);
    }
  }
  local_108 = 0xed;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uStack_14c = 0xf;
  local_158 = 0x100000000000000;
  local_138 = 0;
  uStack_134 = 0x1000000;
  uStack_130 = uStack_150;
  uStack_12c = 0xf;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_138);
  local_a8 = local_f8;
  uVar5 = CONCAT44(uVar7,DAT_141a02ef8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_148,1,uVar5,&local_a8);
  uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_108 = 0xf0;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    uStack_14c = 0xf;
    local_158 = 0x100000000000000;
    local_138 = 0;
    uStack_134 = 0x1000000;
    uStack_130 = uStack_150;
    uStack_12c = 0xf;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_138);
    local_a0 = local_e8;
    uVar4 = CONCAT44(uVar7,DAT_141a02ea8);
    FUN_140e634e0(param_1,param_2,&local_128,1,uVar4,&local_a0);
    uVar7 = (undefined4)((ulonglong)uVar4 >> 0x20);
    local_108 = 0xf1;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    uStack_14c = 0xf;
    local_158 = 0x100000000000000;
    local_138 = 0;
    uStack_134 = 0x1000000;
    uStack_130 = uStack_150;
    uStack_12c = 0xf;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_138);
    local_a8 = local_f8;
    uVar5 = CONCAT44(uVar7,DAT_141a02ef8);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_148,1,uVar5,&local_a8);
    uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 == '\0') {
      local_108 = 0x101;
      uVar4 = (**(code **)(*DAT_141ddc848 + 8))(DAT_141ddc848,DAT_141a02e48);
      cVar1 = FUN_140e491e0(uVar4);
      if (cVar1 == '\0') {
        local_108 = 0x104;
        puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc848 + 0x10))(DAT_141ddc848,DAT_141a02e48);
        uStack_14c = 0xd;
        local_158 = 0x3ff0000000000000;
        if (&local_158 != puVar3) {
          local_138 = 0;
          uStack_134 = 0x3ff00000;
          uStack_130 = uStack_150;
          uStack_12c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar3);
          }
          FUN_140041b80(puVar3,&local_138);
        }
      }
      else {
        local_108 = 0x108;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a02cd8);
        uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a02708);
        iVar2 = FUN_140e851f0(uVar4,uVar5,DAT_141955260,0);
        if (iVar2 == 0) {
          local_108 = 0x10a;
          if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          local_138 = _DAT_141dcb0f8;
          uStack_134 = uRam0000000141dcb0fc;
          uStack_130 = uRam0000000141dcb100;
          uStack_12c = DAT_141dcb104;
        }
        else {
          local_108 = 0x116;
          if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          local_138 = _DAT_141dcb118;
          uStack_134 = uRam0000000141dcb11c;
          uStack_130 = uRam0000000141dcb120;
          uStack_12c = DAT_141dcb124;
        }
        local_13c = 5;
        local_140 = 0;
        local_148 = 0;
        if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_138);
        local_a8 = local_f8;
        ppuVar6 = &local_a8;
        gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                  (param_1,param_2,&local_148,1,ppuVar6);
        uVar7 = (undefined4)((ulonglong)ppuVar6 >> 0x20);
      }
      local_108 = 0x11b;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_148 = 0;
      local_140 = 0;
      local_13c = 5;
      local_138 = _DAT_141dc6110;
      uStack_134 = uRam0000000141dc6114;
      uStack_130 = uRam0000000141dc6118;
      uStack_12c = uRam0000000141dc611c;
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_138);
      local_a8 = local_f8;
      local_138 = _DAT_1419e1ae0;
      uStack_134 = uRam00000001419e1ae4;
      uStack_130 = uRam00000001419e1ae8;
      uStack_12c = uRam00000001419e1aec;
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_138);
      local_a0 = local_e8;
      local_138 = _DAT_1419e1ac0;
      uStack_134 = uRam00000001419e1ac4;
      uStack_130 = uRam00000001419e1ac8;
      uStack_12c = uRam00000001419e1acc;
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_138);
      local_98 = local_d8;
      uStack_14c = 0xf;
      local_158 = 0x100000000000000;
      local_138 = 0;
      uStack_134 = 0x1000000;
      uStack_130 = uStack_150;
      uStack_12c = 0xf;
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_138);
      local_90 = local_c8;
      FUN_140e634e0(param_1,param_2,&local_148,4,CONCAT44(uVar7,DAT_141a02e88),&local_a8);
    }
    else {
      local_108 = 0xfb;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      local_138 = _DAT_141dcb098;
      uStack_134 = uRam0000000141dcb09c;
      uStack_130 = uRam0000000141dcb0a0;
      uStack_12c = DAT_141dcb0a4;
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_138);
      local_a0 = local_e8;
      gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                (param_1,param_2,&local_128,1,&local_a0);
    }
  }
  local_108 = 0x120;
  uStack_14c = 0xf;
  local_158 = 0x100000000000000;
  FUN_140e87170(&local_158,DAT_141a02e28,0x80000000,&local_48,param_1,param_2);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  cVar1 = FUN_140e491e0(&local_48);
  if (cVar1 == '\0') {
    local_108 = 0x12a;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    local_138 = _DAT_141dcb0d8;
    uStack_134 = uRam0000000141dcb0dc;
    uStack_130 = uRam0000000141dcb0e0;
    uStack_12c = DAT_141dcb0e4;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_138);
    local_a8 = local_f8;
    gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
              (param_1,param_2,&local_148,1,&local_a8);
    local_108 = 299;
    local_158 = 0x3ff0000000000000;
    uStack_14c = 0xd;
    local_138 = 0;
    uStack_134 = 0x3ff00000;
    uStack_130 = uStack_150;
    uStack_12c = 0xd;
    if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_58);
    }
    FUN_140041b80(&local_58,&local_138);
    uStack_14c = 0xf;
    local_158 = 0x100000000000000;
    FUN_140e86c30(&local_158,DAT_141a02e28,0x80000000,&local_58);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
  }
  local_108 = 0x130;
  uStack_14c = 0xf;
  local_158 = 0x100000000000000;
  FUN_140e87170(&local_158,DAT_141a02ee8,0x80000000,&local_68,param_1,param_2);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uStack_14c = 0;
  local_158 = 0x40cf408000000000;
  iVar2 = FUN_140e851f0(&local_68,&local_158,DAT_141955260,0);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (iVar2 != 0) {
    local_108 = 0x13a;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    uStack_14c = 0xf;
    local_158 = 0x100000000000000;
    FUN_140e87170(&local_158,DAT_141a02ee8,0x80000000,&local_68,param_1,param_2);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_138 = _DAT_141dcb0c8;
    uStack_134 = uRam0000000141dcb0cc;
    uStack_130 = uRam0000000141dcb0d0;
    uStack_12c = DAT_141dcb0d4;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_138);
    local_a8 = local_f8;
    local_138 = _DAT_1419e1ac0;
    uStack_134 = uRam00000001419e1ac4;
    uStack_130 = uRam00000001419e1ac8;
    uStack_12c = uRam00000001419e1acc;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_138);
    local_a0 = local_e8;
    local_138 = _DAT_141dcb0b8;
    uStack_134 = uRam0000000141dcb0bc;
    uStack_130 = uRam0000000141dcb0c0;
    uStack_12c = DAT_141dcb0c4;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_138);
    local_98 = local_d8;
    local_138 = (undefined4)local_68;
    uStack_134 = local_68._4_4_;
    uStack_130 = uStack_60;
    uStack_12c = uStack_5c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_138);
    local_90 = local_c8;
    local_138 = _DAT_141dcb0e8;
    uStack_134 = uRam0000000141dcb0ec;
    uStack_130 = uRam0000000141dcb0f0;
    uStack_12c = DAT_141dcb0f4;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_138);
    local_88 = local_b8;
    gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
              (param_1,param_2,&local_148,5,&local_a8);
    local_108 = 0x13b;
    if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_80);
    }
    local_74 = 0;
    local_80 = 0x40cf408000000000;
    uStack_14c = 0xf;
    local_158 = 0x100000000000000;
    FUN_140e86c30(&local_158,DAT_141a02ee8,0x80000000,&local_80);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

