// gml_Script_anon_5492_gml_Object_oPlayer_Other_10 @ 0x140c67710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_5492_gml_Object_oPlayer_Other_10
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined1 **ppuVar7;
  ulonglong in_stack_ffffffffffffff40;
  ulonglong uVar8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_60 [12];
  byte local_54;
  undefined1 local_50 [12];
  byte local_44;
  
  local_70 = "gml_Script_anon@4159@gml_Object_oPlayer_Other_10";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x90;
  _eh_vector_constructor_iterator_(local_60,0x10,2,FUN_1400424d0,FUN_140041b30);
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c60);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x91;
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_68 = 0x91;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    *param_3 = 0;
    goto LAB_140c67cfd;
  }
  local_68 = 0x93;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_88 = CONCAT44(uRam00000001419ed0b4,_DAT_1419ed0b0);
  uStack_80 = uRam00000001419ed0b8;
  uStack_7c = uRam00000001419ed0bc;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_88);
  local_98 = local_60;
  local_88 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_80 = DAT_1419df7b8;
  uStack_7c = DAT_1419df7bc;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_88);
  local_90 = local_50;
  ppuVar7 = &local_98;
  uVar3 = gml_Script_InputPressedMany(param_1,param_2,&local_b8,2,ppuVar7);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
LAB_140c67a98:
    local_68 = 0x9f;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff968);
    uVar8 = 0;
    uVar3 = FUN_140e63610(param_1,param_2,&local_b8,0,uVar6,0);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 != '\0') {
      local_68 = 0xa1;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f80c8);
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f7d68);
      FUN_140e609c0(param_1);
      if (puVar4 != puVar5) {
        local_88 = *puVar4;
        uStack_80 = *(undefined4 *)(puVar4 + 1);
        uStack_7c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_88);
      }
      FUN_140e60910(1);
      local_68 = 0xa3;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f7b38);
      uStack_7c = 0;
      local_88 = 0;
      iVar2 = FUN_140e851f0(uVar3,&local_88,DAT_141955260,1);
      if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      if (0 < iVar2) {
        local_68 = 0xa5;
        if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        local_b8 = 0;
        local_b0 = 0;
        local_ac = 5;
        uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
        FUN_140e87440(uVar3,DAT_141a55540,0x80000000,&local_a8,uVar6 & 0xffffffffffffff00,
                      uVar8 & 0xffffffffffffff00);
        local_88 = CONCAT44(DAT_141ddaa98._4_4_,(undefined4)DAT_141ddaa98);
        uStack_80 = DAT_141ddaaa0;
        uStack_7c = DAT_141ddaaa4;
        if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_60);
        }
        FUN_140041b80(local_60,&local_88);
        local_98 = local_60;
        uVar3 = FUN_140069500(uVar3);
        FUN_140e63610(uVar3,param_2,&local_b8,1,&local_a8,&local_98);
        local_68 = 0xa7;
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f7d68);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
        *puVar4 = 0;
        local_68 = 0xa8;
        goto LAB_140c67cd4;
      }
    }
    local_68 = 0xad;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    *param_3 = 0;
  }
  else {
    local_68 = 0x95;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f7ef8);
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f7b38);
    FUN_140e609c0(param_1);
    if (puVar4 != puVar5) {
      local_88 = *puVar4;
      uStack_80 = *(undefined4 *)(puVar4 + 1);
      uStack_7c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_88);
    }
    FUN_140e60910(1);
    local_68 = 0x96;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f7d68);
    uStack_7c = 0;
    local_88 = 0;
    iVar2 = FUN_140e851f0(uVar3,&local_88,DAT_141955260,1);
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    if (iVar2 < 1) goto LAB_140c67a98;
    local_68 = 0x98;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f7b38);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0;
    local_68 = 0x99;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar3,DAT_141a55540,0x80000000,&local_a8,(ulonglong)ppuVar7 & 0xffffffffffffff00,
                  in_stack_ffffffffffffff40 & 0xffffffffffffff00);
    local_88 = CONCAT44(DAT_141ddaa98._4_4_,(undefined4)DAT_141ddaa98);
    uStack_80 = DAT_141ddaaa0;
    uStack_7c = DAT_141ddaaa4;
    if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_60);
    }
    FUN_140041b80(local_60,&local_88);
    local_98 = local_60;
    uVar3 = FUN_140069500(uVar3);
    FUN_140e63610(uVar3,param_2,&local_b8,1,&local_a8,&local_98);
    local_68 = 0x9a;
LAB_140c67cd4:
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    *param_3 = 0x3ff0000000000000;
  }
LAB_140c67cfd:
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

