// gml_GlobalScript_StatesPest @ 0x140571090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript_StatesPest
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 uVar7;
  undefined8 uVar6;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_108;
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  
  local_120 = "gml_Script_StatesPatronChange";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 0x216;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_108,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_5c = 0xffffff;
  local_68 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_13c = 0;
  local_148 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_118 = 0x218;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_4c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_50 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) == 0) {
    local_58 = *param_5;
  }
  else {
    FUN_1400419b0(&local_58);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de0038) &&
     (_Init_thread_header(&DAT_141de0038), DAT_141de0038 == -1)) {
    _DAT_141ddfedc = 0;
    _DAT_141ddfed0 = 0x4000000000000000;
    _DAT_141ddfef0 = 0;
    _DAT_141ddfee4 = 0;
    _DAT_141ddfef4 = 1;
    _DAT_141ddff04 = 0;
    _DAT_141ddfef8 = 0x3ff0000000000000;
    _DAT_141ddff08 = 2;
    _DAT_141ddff18 = 0;
    _DAT_141ddff0c = 0x4008000000000000;
    _DAT_141ddff1c = 3;
    atexit((_func_5014 *)&LAB_1414824b0);
    _Init_thread_footer(&DAT_141de0038);
  }
  uVar4 = 0;
  do {
    iVar1 = FUN_140e851f0(&DAT_141ddfed0 + (longlong)(int)uVar4 * 0x14,&local_58,DAT_141955260,0);
    uVar7 = (undefined4)((ulonglong)pcVar5 >> 0x20);
    if (iVar1 == 0) {
      iVar1 = *(int *)(&DAT_141ddfee0 + (longlong)(int)uVar4 * 0x14);
      if (iVar1 == 0) {
        local_118 = 0x21c;
        uStack_12c = 0xf;
        local_138 = 0x100000100000337;
        local_c8 = 0x100000100000337;
        uStack_c0 = uStack_130;
        uStack_bc = 0xf;
        if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_68);
        }
        FUN_140041b80(&local_68,&local_c8);
        FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_68);
        local_118 = 0x21d;
        if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        local_8c = 0;
        local_98 = 0x4014000000000000;
        FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_98);
        local_118 = 0x21e;
        if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        local_9c = 0;
        local_a8 = 0;
        FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_a8);
        local_118 = 0x21f;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        local_148 = 0;
        local_140 = 0;
        local_13c = 5;
        uVar2 = CONCAT44(uVar7,DAT_1419fdb68);
        FUN_140e634e0(param_1,param_2,&local_148,0,uVar2,0);
        uVar7 = (undefined4)((ulonglong)uVar2 >> 0x20);
        local_118 = 0x220;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        local_148 = 0;
        local_140 = 0;
        local_13c = 5;
        puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f60d8);
        if (puVar3 != &local_108) {
          local_138 = *puVar3;
          uStack_130 = *(undefined4 *)(puVar3 + 1);
          uStack_12c = *(undefined4 *)((longlong)puVar3 + 0xc);
          if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_108);
          }
          FUN_140041b80(&local_108,&local_138);
        }
        local_88 = &local_108;
        local_138 = CONCAT44(uRam00000001419e6404,_DAT_1419e6400);
        uStack_130 = uRam00000001419e6408;
        uStack_12c = uRam00000001419e640c;
        if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_138);
        local_80 = local_f8;
        local_138 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
        uStack_130 = uRam00000001419df7a8;
        uStack_12c = uRam00000001419df7ac;
        if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_138);
        local_78 = local_e8;
        FUN_140e634e0(param_1,param_2,&local_148,3,CONCAT44(uVar7,DAT_141a0a2e8),&local_88);
        local_118 = 0x222;
        puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdae8);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar3);
        }
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
        *puVar3 = 0x4000000000000000;
        local_118 = 0x224;
      }
      else if (iVar1 == 1) {
        local_118 = 0x228;
        puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd428);
        uVar2 = FUN_140e794b0(0,0);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar3);
        }
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
        *puVar3 = uVar2;
        local_118 = 0x22a;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        local_148 = 0;
        local_140 = 0;
        local_13c = 5;
        uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd588);
        local_138 = CONCAT44(uRam00000001419e63e4,_DAT_1419e63e0);
        uStack_130 = uRam00000001419e63e8;
        uStack_12c = uRam00000001419e63ec;
        if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        FUN_140041b80(&local_108,&local_138);
        local_88 = &local_108;
        local_138 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_130 = DAT_1419df7b8;
        uStack_12c = DAT_1419df7bc;
        if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_138);
        local_80 = local_f8;
        local_138 = CONCAT44(uRam00000001419e6464,_DAT_1419e6460);
        uStack_130 = uRam00000001419e6468;
        uStack_12c = uRam00000001419e646c;
        if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_138);
        local_78 = local_e8;
        FUN_140e63610(param_1,param_2,&local_148,3,uVar2,&local_88);
        uVar7 = (undefined4)((ulonglong)uVar2 >> 0x20);
        local_118 = 0x22c;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        local_148 = 0;
        local_140 = 0;
        local_13c = 5;
        uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd3b8);
        local_138 = CONCAT44(uRam0000000141dc66f4,_DAT_141dc66f0);
        uStack_130 = uRam0000000141dc66f8;
        uStack_12c = uRam0000000141dc66fc;
        if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        FUN_140041b80(&local_108,&local_138);
        local_88 = &local_108;
        uVar6 = CONCAT44(uVar7,DAT_141a0a0d8);
        puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_148,1,uVar6,&local_88);
        uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
        uStack_bc = *(undefined4 *)((longlong)puVar3 + 0xc);
        uStack_c0 = *(undefined4 *)(puVar3 + 1);
        if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) == 0) {
          local_c8 = *puVar3;
        }
        else {
          FUN_1400419b0(&local_c8,puVar3);
        }
        uStack_12c = 7;
        local_138 = CONCAT44(local_138._4_4_,2);
        FUN_140042560(&local_c8,&local_138);
        if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        uVar4 = FUN_140e851f0(uVar2,&local_c8,DAT_141955260,1);
        if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        if (uVar4 < 0x80000000) {
          local_118 = 0x22e;
          if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_b8);
          }
          local_b8 = 0;
          local_b0 = 0;
          local_ac = 5;
          uStack_12c = 0xf;
          local_138 = 0x100000200000013;
          local_c8 = 0x100000200000013;
          uStack_c0 = uStack_130;
          uStack_bc = 0xf;
          if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_f8);
          }
          FUN_140041b80(local_f8,&local_c8);
          local_80 = local_f8;
          local_138 = CONCAT44(uRam00000001419e6414,_DAT_1419e6410);
          uStack_130 = uRam00000001419e6418;
          uStack_12c = uRam00000001419e641c;
          if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_e8);
          }
          FUN_140041b80(local_e8,&local_138);
          local_78 = local_e8;
          local_138 = CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
          uStack_130 = uRam00000001419df7c8;
          uStack_12c = uRam00000001419df7cc;
          if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_d8);
          }
          FUN_140041b80(local_d8,&local_138);
          local_70 = local_d8;
          FUN_140e634e0(param_1,param_2,&local_b8,3,CONCAT44(uVar7,DAT_141a0a2e8),&local_80);
          local_118 = 0x22f;
          if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          local_148 = 0;
          local_140 = 0;
          local_13c = 5;
          local_138 = CONCAT44(uRam00000001419e63f4,_DAT_1419e63f0);
          uStack_130 = uRam00000001419e63f8;
          uStack_12c = uRam00000001419e63fc;
          if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_108);
          }
          FUN_140041b80(&local_108,&local_138);
          local_88 = &local_108;
          local_138 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_130 = DAT_1419df7b8;
          uStack_12c = DAT_1419df7bc;
          if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_f8);
          }
          FUN_140041b80(local_f8,&local_138);
          local_80 = local_f8;
          gml_Script_truestate_begin_step(param_1,param_2,&local_148,2,&local_88);
        }
        local_118 = 0x233;
      }
      else if (iVar1 == 2) {
        local_118 = 0x237;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        local_148 = 0;
        local_140 = 0;
        local_13c = 5;
        uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5b18);
        FUN_140e63610(param_1,param_2,&local_148,0,uVar2,0);
        local_118 = 0x238;
      }
      else if (iVar1 == 3) {
        local_118 = 0x23c;
      }
      break;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(&local_108,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

