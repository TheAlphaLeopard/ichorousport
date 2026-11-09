// gml_Script____struct___697_anon_16129_gml_Object_oPlayer_Other_10 @ 0x140c79680

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___697_anon_16129_gml_Object_oPlayer_Other_10
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 uVar7;
  undefined8 uVar6;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined4 local_78 [4];
  undefined4 local_68 [4];
  undefined1 local_58 [16];
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  undefined1 *local_20;
  
  local_40 = "gml_Script_anon@15930@gml_Object_oPlayer_Other_10";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x295;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_78,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_bc = 0;
  local_c8 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x297;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7d8);
  if (puVar2 != &local_88) {
    local_b8 = *(undefined4 *)puVar2;
    uStack_b4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_b0 = *(undefined4 *)(puVar2 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_b8);
  }
  local_38 = 0x298;
  while( true ) {
    uVar7 = (undefined4)((ulonglong)pcVar5 >> 0x20);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f7a68);
    if (puVar3 != local_78) {
      local_b8 = *puVar3;
      uStack_b4 = puVar3[1];
      uStack_b0 = puVar3[2];
      uStack_ac = puVar3[3];
      if ((1 << ((byte)local_78[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_78);
      }
      FUN_140041b80(local_78,&local_b8);
    }
    local_30 = local_78;
    uVar6 = CONCAT44(uVar7,DAT_1419f58d8);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_c8,1,uVar6,&local_30);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') break;
    local_38 = 0x29a;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f7a68);
    if (puVar3 != local_68) {
      local_b8 = *puVar3;
      uStack_b4 = puVar3[1];
      uStack_b0 = puVar3[2];
      uStack_ac = puVar3[3];
      if ((1 << ((byte)local_68[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_68);
      }
      FUN_140041b80(local_68,&local_b8);
    }
    local_28 = local_68;
    local_b8 = _DAT_141dc7490;
    uStack_b4 = uRam0000000141dc7494;
    uStack_b0 = uRam0000000141dc7498;
    uStack_ac = uRam0000000141dc749c;
    if ((1 << (local_58[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_58);
    }
    FUN_140041b80(local_58,&local_b8);
    local_20 = local_58;
    uVar4 = CONCAT44(uVar7,DAT_1419f5a78);
    puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_a8,2,uVar4,&local_28);
    uVar7 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (puVar2 != &local_98) {
      local_b8 = *(undefined4 *)puVar2;
      uStack_b4 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_b0 = *(undefined4 *)(puVar2 + 1);
      uStack_ac = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_b8);
    }
    local_38 = 0x29b;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f7a68);
    if (puVar3 != local_78) {
      local_b8 = *puVar3;
      uStack_b4 = puVar3[1];
      uStack_b0 = puVar3[2];
      uStack_ac = puVar3[3];
      if ((1 << ((byte)local_78[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_78);
      }
      FUN_140041b80(local_78,&local_b8);
    }
    local_30 = local_78;
    local_b8 = _DAT_141dc7490;
    uStack_b4 = uRam0000000141dc7494;
    uStack_b0 = uRam0000000141dc7498;
    uStack_ac = uRam0000000141dc749c;
    if ((1 << ((byte)local_68[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_b8);
    local_28 = local_68;
    pcVar5 = (code *)CONCAT44(uVar7,DAT_1419f5938);
    FUN_140e634e0(param_1,param_2,&local_c8,2,pcVar5,&local_30);
    local_38 = 0x29d;
    FUN_1400460e0(&local_88,&local_98);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

