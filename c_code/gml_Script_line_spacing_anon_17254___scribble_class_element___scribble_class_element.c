// gml_Script_line_spacing_anon_17254___scribble_class_element___scribble_class_element @ 0x140118410

undefined8 *
gml_Script_line_spacing_anon_17254___scribble_class_element___scribble_class_element
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = 
  "gml_Script_pin_guide_width@anon@16051@__scribble_class_element@__scribble_class_element";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x1f7;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a056f8);
  cVar1 = FUN_140e491e0(uVar3);
  puVar6 = &DAT_1419df7b0;
  if (cVar1 == '\0') {
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a053e8);
    if (param_4 < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*param_5;
    }
    iVar2 = FUN_140e851f0(uVar3,puVar5,DAT_141955260,0);
    if (iVar2 == 0) {
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04f18);
      uStack_6c = 0;
      local_78 = &DAT_bff0000000000000;
      iVar2 = FUN_140e851f0(uVar3,&local_78,DAT_141955260,0);
      if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      if (iVar2 == 0) {
        uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05788);
        cVar1 = FUN_140e491e0(uVar3);
        if (cVar1 == '\0') {
          uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05578);
          cVar1 = FUN_140e491e0(uVar3);
          if (cVar1 == '\0') {
            uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a06018);
            uStack_6c = 0;
            local_78 = (undefined1 *)0x3ff0000000000000;
            iVar2 = FUN_140e851f0(uVar3,&local_78,DAT_141955260,0);
            if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_78);
            }
            if (iVar2 == 0) goto LAB_1401188cc;
          }
        }
      }
    }
  }
  local_48 = 0x1fe;
  ppuVar4 = (undefined1 **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05918);
  uStack_6c = 0xd;
  local_78 = (undefined1 *)0x3ff0000000000000;
  if (&local_78 != ppuVar4) {
    local_68 = 0;
    uStack_64 = 0x3ff00000;
    uStack_60 = uStack_70;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(ppuVar4);
    }
    FUN_140041b80(ppuVar4,&local_68);
  }
  local_48 = 0x1ff;
  ppuVar4 = (undefined1 **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04dd8);
  uStack_6c = 0xd;
  local_78 = (undefined1 *)0x3ff0000000000000;
  if (&local_78 != ppuVar4) {
    local_68 = 0;
    uStack_64 = 0x3ff00000;
    uStack_60 = uStack_70;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(ppuVar4);
    }
    FUN_140041b80(ppuVar4,&local_68);
  }
  local_48 = 0x200;
  ppuVar4 = (undefined1 **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a053a8);
  uStack_6c = 0xd;
  local_78 = (undefined1 *)0x3ff0000000000000;
  if (&local_78 != ppuVar4) {
    local_68 = 0;
    uStack_64 = 0x3ff00000;
    uStack_60 = uStack_70;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(ppuVar4);
    }
    FUN_140041b80(ppuVar4,&local_68);
  }
  local_48 = 0x202;
  ppuVar4 = (undefined1 **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a056f8);
  uStack_6c = 0xd;
  local_78 = (undefined1 *)0x0;
  if (&local_78 != ppuVar4) {
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = uStack_70;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(ppuVar4);
    }
    FUN_140041b80(ppuVar4,&local_68);
  }
  local_48 = 0x203;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a053e8);
  FUN_140e609c0(param_1);
  if (0 < param_4) {
    puVar6 = (undefined8 *)*param_5;
  }
  if (puVar6 != puVar5) {
    local_68 = *(undefined4 *)puVar6;
    uStack_64 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_60 = *(undefined4 *)(puVar6 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0x204;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04f18);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = &DAT_bff0000000000000;
  local_48 = 0x205;
  ppuVar4 = (undefined1 **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05788);
  uStack_6c = 0xd;
  local_78 = (undefined1 *)0x0;
  if (&local_78 != ppuVar4) {
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = uStack_70;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(ppuVar4);
    }
    FUN_140041b80(ppuVar4,&local_68);
  }
  local_48 = 0x206;
  ppuVar4 = (undefined1 **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05578);
  uStack_6c = 0xd;
  local_78 = (undefined1 *)0x0;
  if (&local_78 != ppuVar4) {
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = uStack_70;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(ppuVar4);
    }
    FUN_140041b80(ppuVar4,&local_68);
  }
  local_48 = 0x207;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06018);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0x3ff0000000000000;
LAB_1401188cc:
  local_48 = 0x20a;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar3 = FUN_140e5c910();
  FUN_140e42c10(uVar3,param_1);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

